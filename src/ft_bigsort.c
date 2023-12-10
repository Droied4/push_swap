/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmeno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:12:29 by carmeno           #+#    #+#             */
/*   Updated: 2023/12/10 17:22:24 by carmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_bigsort(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	i;

	size = ft_lstsize(*stack_a);
	i = 0;
	while (i < size)
	{
		ft_putmin_top(stack_a);
		pb(stack_a, stack_b);
		i++;
	}
	i = 0;
	while (i < size)
	{
		pa(stack_a, stack_b);
		i++;
	}
}
