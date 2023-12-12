/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:48:57 by deordone          #+#    #+#             */
/*   Updated: 2023/12/12 18:21:08 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_chefsort(t_list **stack_a, t_list **stack_b)
{
	if (ft_status_sort(*stack_a) == 0)
	{
		ft_del(stack_a);
		exit(0);
	}
	if (ft_lstsize(*stack_a) == 2)
		ft_sort2(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		ft_sort3(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		ft_sort4(stack_a, stack_b);	
	else if (ft_lstsize(*stack_a) <= 5)
		ft_sort5(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) > 5)
		ft_bigsort(stack_a, stack_b);
	
/*	print_stack(stack_a);
	printf("stack_b\n");
	print_stack(stack_b);*/
	if (stack_a)
		ft_del(stack_a);
	if (stack_b)
		ft_del(stack_b);
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ft_iscorrect(argc, argv, &stack_a) != 1)
		ft_error();
	ft_chefsort(&stack_a, &stack_b);
	return (0);
}
