/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmeno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 03:33:05 by carmeno           #+#    #+#             */
/*   Updated: 2023/12/10 21:09:02 by carmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_reverse(t_list **stack)
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

void    rra(t_list **stack_a)
{
        ft_reverse(stack_a);
        if(write(1, "rra\n", 4) < 0)
        {
                ft_del(stack_a);
                ft_error();
        }
}

void    rrb(t_list **stack_b)
{
        ft_reverse(stack_b);
        if(write(1, "rrb\n", 4) < 0)
        {
                ft_del(stack_b);
                ft_error();
        }
}

void    rrr(t_list **stack_a, t_list **stack_b)
{
        ft_reverse(stack_a);
        ft_reverse(stack_b);
        if(write(1, "rrr\n", 4) < 0)
        {
                ft_del(stack_a);
                ft_del(stack_b);
                ft_error();
        }
}
