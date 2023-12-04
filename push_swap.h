/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:12:07 by deordone          #+#    #+#             */
/*   Updated: 2023/12/04 14:58:44 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
/* Stefy pro-tip
typedef struct s_stack
{
	int				len;
	t_list			*first;
	t_list			*last;
}	t_stack; */
typedef struct s_list
{
	int				number;
	// int				index;
	struct s_list	*next;
	// struct s_list	*prev;
}					t_list;
/* ╔═══════════════╗
 * 			 Main
   ╚═══════════════╝	*/
int					push_swap(int argc, char **argv, t_list **stack_a);
/* ╔═══════════════╗
 * 			Chef
   ╚═══════════════╝	*/
int					ft_atoi(char **argv, int j);
int				ft_attach(char **argv, t_list **stack, int j);
/* ╔═══════════════╗
 * 		checker
   ╚═══════════════╝	*/
int					ft_isvalid(int argc, char **argv);
int					ft_isrepeated(t_list **stack_a);
int					ft_islimited(long nb);
int					ft_iscorrect(t_list **lst);
/* ╔═══════════════╗
 * 		Movements
   ╚═══════════════╝	*/

/* ╔═══════════════╗
 * 		lists
   ╚═══════════════╝	*/
int					ft_error(t_list **lst);
int					ft_lstsize(t_list *lst);
t_list				*ft_lastnode(t_list *lst);

#endif
