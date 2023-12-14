/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:29:36 by deordone          #+#    #+#             */
/*   Updated: 2023/12/14 16:26:29 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

/*check 0 - check if all is correct and create the list*/
int	ft_iscorrect(int argc, char **argv, t_list **stack_a)
{
	int	j;
	int	i;

	if (argc < 2)
		exit(1);
	ft_isvalid(argv);
	i = 1;
	j = 1;
	while (i < argc)
	{
		ft_attach(argv, stack_a, j);
		i++;
		j++;
	}
	ft_isrepeated(stack_a);
	ft_index_stack(stack_a);
	return (0);
}
/* check 1 - looks for valid parameters */

int	ft_isvalid(char **argv)
{
	int	i;
	int	j;

	j = 1;
	if ((argv[1][0] == '+' && argv[1][1] == '\0') || (argv[1][0] == '-' && argv[1][1] == '\0'))
		ft_error();
	while (argv[j])
	{
		i = 0;
		if (argv[j][0] == '-' || argv[j][0] == '+')
			i++;
		while (argv[j][i] != '\0')
		{
			if (((argv[j][i] == '-') && (argv[j][i + 1] == '-') && (argv[j][i
						- 1] != ' ')) || ((argv[j][i]) == '+' && (argv[j][i
						+ 1] == '+') && argv[j][i - 1] != ' '))
				ft_error();
			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
				ft_error();
			i++;
		}
		j++;
	}
	return (0);
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
	return (0);
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
