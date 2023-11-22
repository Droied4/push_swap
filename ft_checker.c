/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:29:36 by deordone          #+#    #+#             */
/*   Updated: 2023/11/21 12:58:40 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"



/* this function will check if all the parameters are valid */
int	ft_isvalid(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2 && !argv[j][i])
		return (-1);
	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (((argv[j][0] == '-') && (argv[j][1] == '-'))
				|| ((argv[j][0]) == '+' && (argv[j][1] == '+')))
				return (-1);
			if (argv[j][i] == '-' || argv[j][i] == '+')
				i++;
			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
				return (-1);
			i++;
		}
		j++;
	}
	if (argc <= 1)
		return (-1);
	return (1);
}
