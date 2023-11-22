/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chef.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:14:46 by deordone          #+#    #+#             */
/*   Updated: 2023/11/22 18:52:00 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*paso 1. funcion que tome los argumentos y los pase a enteros*/
int	ft_atoi(char **argv)
{
	int	i;
	int	j;
	int	nb;
	int	sign;

	i = 0;
	j = 1;
	sign = 1;
	while (argv[j][i] == '\t' || argv[j][i] == '\n' || argv[j][i] == '\v'
		|| argv[j][i] == '\f' || argv[j][i] == '\r' || argv[j][i] == ' ')
		i++;
	if ((argv[j][i] == '-' || argv[j][i] == '+') && argv[j][i] != '\0')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (argv[j][i] >= '0' && argv[j][i] <= '9')
	{
		nb = nb * 10 + (argv[j][i] - '0');
		i++;
	}
	return ((int)(nb * sign));
}

/* paso 2. tengo que conectar cada nodo*/

void	ft_attach(t_list *node, t_list **lst)
{	
		
	ft_lstadd_back(node);
		
}
