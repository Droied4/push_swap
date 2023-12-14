/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:49:01 by deordone          #+#    #+#             */
/*   Updated: 2023/12/14 16:09:45 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char **argv, int j, t_list **stack_a)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (argv[j][i] == '\t' || argv[j][i] == '\n' || argv[j][i] == '\v'
		|| argv[j][i] == '\f' || argv[j][i] == '\r' || argv[j][i] == ' ')
		i++;
	if ((argv[j][i] == '-' || argv[j][i] == '+') && argv[j][i] != '\0')
	{
		if (argv[j][i] == '-')
			sign = -1;
		i++;
	}
	while (argv[j][i] >= '0' && argv[j][i] <= '9')
	{
		nb = nb * 10 + (argv[j][i] - '0');
		ft_islimited(nb, stack_a);
		i++;
	}
	return ((int)nb * sign);
}

int	ft_sort3_cases(t_list **stack_a)
{
	t_list	*lastnode;
	t_list	*middlenode;

	lastnode = ft_lastnode(*stack_a);
	middlenode = (*stack_a)->next;
	if ((*stack_a)->number < lastnode->number)
	{
		if (middlenode->number < lastnode->number)
			return (1);
		return (3);
	}
	else
	{
		if ((middlenode->number > lastnode->number)
			&& middlenode->number < (*stack_a)->number)
			return (2);
		else if ((middlenode->number > lastnode->number)
			&& middlenode->number > (*stack_a)->number)
			return (4);
		else
			return (5);
	}
}

int	ft_min_locator(t_list **stack)
{
	t_list	*temp;
	int		i;
	int		min_pos;
	int		min_value;

	min_value = (*stack)->number;
	temp = (*stack);
	min_pos = 0;
	i = 0;
	while (temp->next != NULL)
	{
		if (temp->number < min_value)
		{
			min_value = temp->number;
			min_pos = i;
		}
		i++;
		temp = temp->next;
	}
	if (temp->number < min_value)
	{
		min_pos = i;
		min_value = temp->number;
	}
	return (min_pos);
}

void	ft_putmin_top(t_list **stack_a)
{
	int	min_pos;
	int	go_up;
	int	go_down;
	int	size;

	min_pos = ft_min_locator(stack_a);
	size = ft_lstsize(*stack_a);
	go_up = min_pos;
	go_down = size - min_pos;
	if (go_up <= go_down)
	{
		while (go_up > 0)
		{
			ra(stack_a);
			go_up--;
		}
	}
	else if (go_down < go_up)
	{
		while (go_down > 0)
		{
			rra(stack_a);
			go_down--;
		}
	}
}
