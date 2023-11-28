/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:48:57 by deordone          #+#    #+#             */
/*   Updated: 2023/11/23 16:57:08 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int argc, char **argv, t_list **lst)
{
	int j;
	int i;

	i = 1;
	j = 1;
	while (i < argc)
	{
		ft_attach(argv, lst, j);
		printf("%d\n", (*lst)->number);
		j++;
		i++;
		*lst = (*lst)->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list *lst = NULL;

	if (ft_isvalid(argc, argv) < 0)
		return (-1);
	printf("checker nice\n");
	push_swap(argc, argv, &lst);
	return (0);
}
