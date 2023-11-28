/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:29:36 by deordone          #+#    #+#             */
/*   Updated: 2023/11/28 18:22:16 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* verifica si hay numeros repetidos en la lista*/

int ft_isrepeat(char **argv, t_list **lst)
{
	t_list *temp1;
	t_list *temp2;

	temp1 = *lst;
	if (!temp1)
		return (-1);
	while (temp1 != NULL)
	{
		temp2 = temp1;
		while (temp2 != NULL)
		{
			temp2 = temp2->next;
			if (!temp2)
				break ;
			if (temp2->number == temp1->number)
			{
				printf("Error numeros iguales");
				return (-1);
			}
		}
		temp1 = temp1->next;
	}
	printf("Ok");
	return (1);
}

/* this function will check if all the parameters are valid */
int	ft_isvalid(int argc, char **argv)
{
	int	i;
	int	j;
	j = 1;
	if (argc <= 2)
		return (-1);
	if (!argv[2][0])
		return (-1);
	while (argv[j])
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (((argv[j][i] == '-') && (argv[j][i + 1] == '-') && (argv[j][i - 1] != ' '))
				|| ((argv[j][i]) == '+' && (argv[j][i + 1] == '+') && argv[j][i - 1] != ' '))
				return (-1);
			if (argv[j][i] == '-' || argv[j][i] == '+')
				i++;
			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
				return (-1);
			i++;
		}
		j++;
	}
	return (1);
}
