/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_micro_sorts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:21:01 by deordone          #+#    #+#             */
/*   Updated: 2023/12/05 16:55:46 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 2▄▀▄▀▄▀▄▀▄▀▄▀▄
*/

void	ft_sort2(t_list **stack)
{
	if (ft_lstsize(*stack) == 2 && ft_status_sort(*stack) == 1)
		sa(stack);
	else
		ft_error();
	ft_del(stack);
	exit(0);
}

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 3▄▀▄▀▄▀▄▀▄▀▄▀▄
*/

//void	ft_sort3(t_list **stack_a, t_list **stack_b)
//{

//}

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 4▄▀▄▀▄▀▄▀▄▀▄▀▄
*/

/*
		▀▄▀▄▀▄▀▄▀▄▀SORT 5▄▀▄▀▄▀▄▀▄▀▄▀▄
*/
