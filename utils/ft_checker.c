/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:29:36 by deordone          #+#    #+#             */
/*   Updated: 2023/12/05 12:26:48 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
/*check 0 - check if all is correct and create the list*/
int	ft_iscorrect(int argc, char **argv, t_list **stack_a)
{
	int	j;
	int	i;

	ft_isvalid(argc, argv);
	i = 1;
	j = 1;
	while (i < argc)
	{
		ft_attach(argv, stack_a, j);
		i++;
		j++;
	}
	ft_isrepeated(stack_a);
	return (1);
}
/* check 1 - looks for valid parameters */

int	ft_isvalid(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc <= 2 || argv[2][0] == '\0')
		ft_error();
	while (argv[j])
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (((argv[j][i] == '-') && (argv[j][i + 1] == '-') && (argv[j][i
						- 1] != ' ')) || ((argv[j][i]) == '+' && (argv[j][i
						+ 1] == '+') && argv[j][i - 1] != ' '))
				ft_error();
			if (argv[j][i] == '-' || argv[j][i] == '+')
				i++;
			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
				ft_error();
			i++;
		}
		j++;
	}
	return (1);
}
/* check 2 - looks for equal numbers*/

int	ft_isrepeated(t_list **stack_a)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!stack_a)
		ft_error();
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
			{
				ft_del(stack_a);
				ft_error();
			}
		}
		temp1 = temp1->next;
	}
	return (1);
}
/* check 3 - look for the INT_MIN and MAX_INT */

int	ft_islimited(long nb, t_list **stack_a)
{
	if (!(nb <= INT_MAX && nb >= INT_MIN))
	{
		ft_del(stack_a);
		ft_error();
	}
	return (nb);
}

void	ft_error(void) /*error control*/
{
	write(2, "Error\n", 6);
	exit(1);
}
