/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:48:57 by deordone          #+#    #+#             */
/*   Updated: 2023/12/04 15:18:06 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int argc, char **argv, t_list **stack_a)
{
	int j;
	int i;

	i = 1;
	j = 1;
	while (i < argc)
	{
		if(ft_attach(argv, stack_a, j) < 1)
			return (ft_error(stack_a));
		j++;
		i++;
	}
	if (ft_isrepeated(stack_a) < 1)
		return (ft_error(stack_a));
	printf("todo ok");
	
	return (1);
}

int	main(int argc, char **argv)
{
	t_list *stack_a = NULL;
	t_list *stack_b = NULL;

	if (ft_isvalid(argc, argv) < 0)
	{
		printf("Error");
		return (-1);
	}
	if (push_swap(argc, argv, &stack_a) < 1)
	{
		printf("Error");
		return (-1);
	}
	return (0);
}

