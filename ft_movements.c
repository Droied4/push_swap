/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:15:37 by deordone          #+#    #+#             */
/*   Updated: 2023/11/29 15:24:33 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(t_list **lst, char c)
{
	t_list *first;
	t_list *second;

	first = *lst;
	second = (*lst)->next;
	(*lst) = second;
	first->next = second->next;
	second->next = first;
	if (c == 'a')
	{
		
		printf("sa");
	}
	if (c == 'b')
	{
		printf("sb")
	}
}
void	ft_push(t_list **lst, char c)
{
	if (c == 'a')
	{
		printf("pa");
	}
	if (c == 'b')
	{
		printf("pb")
	}
}
void	ft_rotate(t_list **lst, char *c)
{
	if (c[0] == 'a')
	{
		if (c[1] == 'b')
		{
			printf("rr");
		}
	}
	if (*c == 'a')
	{
		printf("ra");
	}
	if (*c == 'b')
	{
		printf("rb")
	}
}

void	ft_reverse(t_list **lst, char *c)
{
	if (c[0] == 'a')
	{
		if (c[1] == 'b')
		{
			printf("rrr");
		}
	}
	if (*c == 'a')
	{
		printf("rra");
	}
	if (*c == 'b')
	{
		printf("rrb")
	}
}
