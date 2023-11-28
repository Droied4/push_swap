/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chef.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:14:46 by deordone          #+#    #+#             */
/*   Updated: 2023/11/23 16:44:18 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*paso 1. funcion que tome los argumentos y los pase a enteros*/
int	ft_atoi(char **argv, int j)
{
	int	i;
	int	nb;
	int	sign;

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
		i++;
	}
	return ((int)nb * sign);
}

/*paso 2. tengo que conectar los nodos*/

void	ft_attach(char **argv, t_list **lst, int j)
{
	t_list	*new_node;
	t_list *lastnod;

	if (!argv[1][0])
		return ;
	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (ft_del(lst));
	lastnod = ft_lastnode(*lst);
	if (!lastnod)
		*lst = new_node;
	else
		lastnod->next = new_node;
	new_node->number = ft_atoi(argv, j);
   	new_node->next = NULL;	
}
