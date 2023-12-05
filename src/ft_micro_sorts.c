/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_micro_sorts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:21:01 by deordone          #+#    #+#             */
/*   Updated: 2023/12/05 23:59:24 by carmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 2▄▀▄▀▄▀▄▀▄▀▄▀▄
*/

void	ft_sort2(t_list **stack)
{
	if (ft_lstsize(*stack) == 2 && ft_status_sort(*stack) == 1)
		sa(stack);
	else
		ft_error();
	print_stack(stack);
	ft_del(stack);
	exit(0);
}

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 3▄▀▄▀▄▀▄▀▄▀▄▀▄
*/

void	ft_sort3(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 3 && ft_status_sort(*stack_a) == 1)
		pb(stack_a, stack_b);
	else
		ft_error();
	print_stack(stack_a);
	printf("stack b\n");
	print_stack(stack_b);
	ft_del(stack_a);
	ft_del(stack_b);
	exit(0);
}

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 4▄▀▄▀▄▀▄▀▄▀▄▀▄
*/

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 5▄▀▄▀▄▀▄▀▄▀▄▀▄
*/
