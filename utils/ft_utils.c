/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:49:01 by deordone          #+#    #+#             */
/*   Updated: 2023/12/06 15:43:11 by carmeno          ###   ########.fr       */
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

int	sort3_cases(t_list **stack_a)
{
	t_list	*lastnode;
	t_list	*middlenode;

	lastnode = ft_lastnode(*stack_a);
	middlenode = (*stack_a)->next;
	if ((*stack_a)->number < lastnode->number)
	{
		if(middlenode->number < lastnode->number)
			return (1);
		return (3);	
	}
	else
	{
		if((middlenode->number > lastnode->number) && middlenode->number < (*stack_a)->number)
			return (2);
		else if((middlenode->number > lastnode->number) && middlenode->number > (*stack_a)->number)
			return (4);
		else
			return (5);
	}
}

/*la de printstack tiene que ser comentada antes de entragar*/
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
