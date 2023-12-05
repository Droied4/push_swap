/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:49:01 by deordone          #+#    #+#             */
/*   Updated: 2023/12/05 17:47:10 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void print_stack(t_list **stack)
{
	t_list **temp;

	temp = stack;
	while (*temp)
	{
		printf("value -> %d\n", (*temp)->number);
		*temp = (*temp)->next;
	}
}
