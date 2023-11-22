/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:12:07 by deordone          #+#    #+#             */
/*   Updated: 2023/11/21 13:28:23 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				*number;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;
/* ╔═══════════════╗
 * 		 Chef
   ╚═══════════════╝	*/

/* ╔═══════════════╗
 * 		checker
   ╚═══════════════╝	*/
int					ft_isvalid(int argc, char **argv);
/* ╔═══════════════╗
 * 		lists
   ╚═══════════════╝	*/
t_list *ft_newnode(int *number);
int ft_lstsize(t_list *lst);
t_list *ft_lastnode(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_del(t_list **lst);

#endif
