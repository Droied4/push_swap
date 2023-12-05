/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:01:24 by deordone          #+#    #+#             */
/*   Updated: 2023/12/05 12:27:01 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_del(t_list **lst)
{
	t_list	*temp;

	if (!lst)
		return (-1);
	while (*lst)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
	return (-1);
}

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

t_list	*ft_lastnode(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (temp == NULL)
		return (temp);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}

int	ft_attach(char **argv, t_list **lst, int j)
{
	t_list	*new_node;
	t_list	*lastnod;
	int		new_number;

	if (!argv[1][0])
		ft_error();
	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (ft_del(lst));
	lastnod = ft_lastnode(*lst);
	if (!lastnod)
		*lst = new_node;
	else
		lastnod->next = new_node;
	new_node->number = ft_atoi(argv, j, lst);
	new_node->next = NULL;
	return (1);
}

int	ft_status_sort(t_list **stack_a)
{
	int	rslt;

	rslt = 0;
	while ((*stack_a)->next && rslt == 0)
	{
		if ((*stack_a)->number > (stack_a)->next->number)
			rslt == 1;
		(*stack_a) = (*stack_a)->next;
	}
	return (rslt);
}
