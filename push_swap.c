/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:48:57 by deordone          #+#    #+#             */
/*   Updated: 2023/11/29 15:42:38 by deordone         ###   ########.fr       */
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
		j++;
		i++;
	}
	if (ft_iscorrect(lst) < 1)
		return (-1);
	return (1);
}

int	main(int argc, char **argv)
{
	t_list *lst = NULL;

	if (ft_isvalid(argc, argv) < 0)
		return (-1);
	push_swap(argc, argv, &lst);
	return (0);
}

