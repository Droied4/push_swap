/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmeno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 03:33:05 by carmeno           #+#    #+#             */
/*   Updated: 2023/12/06 03:37:05 by carmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_reverse(t_list **stack);

void    rra(t_list **stack_a)
{
        ft_reverse(stack_a);
        if(write(1, "rra\n", 1) < 0)
        {
                ft_del(stack_a);
                ft_error();
        }
}

void    rrb(t_list **stack_b)
{
        ft_reverse(stack_b);
        if(write(1, "rrb\n", 1) < 0)
        {
                ft_del(stack_b);
                ft_error();
        }
}

void    rrr(t_list **stack_a, t_list **stack_b)
{
        ft_reverse(stack_a);
        ft_reverse(stack_b);
        if(write(1, "rrr\n", 1) < 0)
        {
                ft_del(stack_a);
                ft_del(stack_b);
                ft_error();
        }
}
