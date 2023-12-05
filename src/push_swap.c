/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:48:57 by deordone          #+#    #+#             */
/*   Updated: 2023/12/05 18:30:02 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

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
		printf("[Insert sort3]");
	else if (ft_lstsize(*stack_a) == 4)
		printf("[Insert sort4]");
	else if (ft_lstsize(*stack_a) <= 5)
		printf("[Insert sort5]");
	else if (ft_lstsize(*stack_a) > 5)
		printf("[Insert bigSort]");
	ft_del(stack_b); //esta linea toca eliminarla pero es para que el werror no me rompa las pelotas
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ft_iscorrect(argc, argv, &stack_a) == 1)
		printf("todo ok");
	else
		ft_error();
	ft_chefsort(&stack_a, &stack_b);
	return (0);
}
