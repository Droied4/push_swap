/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_micro_sorts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:21:01 by deordone          #+#    #+#             */
/*   Updated: 2023/12/10 21:08:56 by carmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 2▄▀▄▀▄▀▄▀▄▀▄▀▄
*/

void	ft_sort2(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) == 2 && ft_status_sort(*stack_a) == 1)
		sa(stack_a);
	else
		ft_error();
}

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 3▄▀▄▀▄▀▄▀▄▀▄▀▄
*/

void	ft_sort3(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) == 3 && ft_status_sort(*stack_a) == 1)
	{
		if(ft_sort3_cases(stack_a) == 1)
			sa(stack_a);
		else if (ft_sort3_cases(stack_a) == 2)
		{
			sa(stack_a);
			rra(stack_a);
		}
		else if (ft_sort3_cases(stack_a) == 3)
		{
			sa(stack_a);
			ra(stack_a);
		}
		else if (ft_sort3_cases(stack_a) == 4)
			rra(stack_a);
		else if (ft_sort3_cases(stack_a) == 5)
			ra(stack_a);
	}
	else
		ft_error();
}

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 4▄▀▄▀▄▀▄▀▄▀▄▀▄
*/
void	ft_sort4(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 4 && ft_status_sort(*stack_a) == 1)
	{
		ft_putmin_top(stack_a);
		if (ft_status_sort(*stack_a) == 0)
			return ;
		pb(stack_a, stack_b);
		ft_sort3(stack_a);
		pa(stack_a, stack_b);
	}
}

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 5▄▀▄▀▄▀▄▀▄▀▄▀▄
*/

void	ft_sort5(t_list **stack_a, t_list **stack_b)
{

	if (ft_lstsize(*stack_a) == 5 && ft_status_sort(*stack_a) == 1)
	{
		ft_putmin_top(stack_a);
		pb(stack_a, stack_b);
		ft_sort4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}
