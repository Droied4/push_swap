/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:12:24 by deordone          #+#    #+#             */
/*   Updated: 2023/12/13 15:52:55 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **stack)
{
	t_list	*lastnode;

	lastnode = ft_lastnode((*stack));
	lastnode->next = (*stack);
	*stack = (*stack)->next;
	lastnode->next->next = NULL;
}

void	ra(t_list **stack_a)
{
	ft_rotate(stack_a);
	if (write(1, "ra\n", 3) < 0)
	{
		ft_del(stack_a);
		ft_error();
	}
}

void	rb(t_list **stack_b)
{
	ft_rotate(stack_b);
	if (write(1, "rb\n", 3) < 0)
	{
		ft_del(stack_b);
		ft_error();
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	if (write(1, "rr\n", 3) < 0)
	{
		ft_del(stack_a);
		ft_del(stack_b);
		ft_error();
	}
}
