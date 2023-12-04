/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:29:36 by deordone          #+#    #+#             */
/*   Updated: 2023/12/04 15:12:49 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/* check 1 - looks for valid parameters */
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

/* check 2 - looks for equal numbers*/

int ft_isrepeated(t_list **stack_a)
{
	t_list *temp1;
	t_list *temp2;

	if (!stack_a)
		return (-1);
	temp1 = *stack_a;
	while (temp1 != NULL)
	{
		temp2 = temp1;
		while (temp2 != NULL)
		{
			temp2 = temp2->next;
			if (!temp2)
				break ;
			if (temp2->number == temp1->number)
				return (-1);
		}
		temp1 = temp1->next;
	}
	return (1);
}

/* check 3 - look for the INT_MIN and MAX_INT */

int ft_islimited(long nb)
{
	if (nb > INT_MAX || nb < INT_MIN)
		return (-1);
	else
		return (nb);
}


