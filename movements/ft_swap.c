/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:40:52 by deordone          #+#    #+#             */
/*   Updated: 2023/12/05 14:32:16 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	first = *stack;
	second = (*stack)->next;
	(*stack) = second;
	first->next = second->next;
	second->next = first;
}

void	sa(t_list **stack_a)
{
	ft_swap(stack_a);
	if (write(1, "sa\n", 3) < 0)
		ft_error();
}

void	sb(t_list **stack_b)
{
	ft_swap(stack_b);
	if (write(1, "sb\n", 3) < 0)
		ft_error();
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	if (write(1, "ss\n", 3) < 0)
		ft_error();
}
