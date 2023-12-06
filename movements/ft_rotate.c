/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmeno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:03:56 by carmeno           #+#    #+#             */
/*   Updated: 2023/12/06 03:38:05 by carmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_list **stack)
{
	t_list *lastnode;
	t_list *pre_lastnode;
	int size;
	int i;

	size = ft_lstsize(*stack);
	if(size < 3)
		return ;
	i = 1;
	pre_lastnode = (*stack);
	while (i < size - 1)
	{
		pre_lastnode = pre_lastnode->next;
		i++;
	}
	lastnode = ft_lastnode((*stack));
	lastnode->next = (*stack);
	(*stack) = lastnode;
	pre_lastnode->next = NULL;
}

void	ra(t_list **stack_a)
{
	ft_rotate(stack_a);
	if(write(1, "ra\n", 1) < 0)
	{
		ft_del(stack_a);
		ft_error();
	}
}

void	rb(t_list **stack_b)
{
	ft_rotate(stack_b);
	if(write(1, "rb\n", 1) < 0)
	{
		ft_del(stack_b);
		ft_error();
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	if(write(1, "rr\n", 1) < 0)
	{
		ft_del(stack_a);
		ft_del(stack_b);
		ft_error();
	}
}
