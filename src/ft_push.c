/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:59:54 by deordone          #+#    #+#             */
/*   Updated: 2023/12/13 15:52:49 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **stack1, t_list **stack2)
{
	t_list	*tmp2;

	if (stack1)
	{
		tmp2 = *stack1;
		(*stack1) = (*stack1)->next;
		tmp2->next = *stack2;
		(*stack2) = tmp2;
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	if (!stack_b)
		return ;
	ft_push(stack_b, stack_a);
	if (write(1, "pa\n", 3) < 0)
	{
		ft_del(stack_a);
		ft_del(stack_b);
		ft_error();
	}
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a)
		return ;
	ft_push(stack_a, stack_b);
	if (write(1, "pb\n", 3) < 0)
	{
		ft_del(stack_a);
		ft_del(stack_b);
		ft_error();
	}
}
