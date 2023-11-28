/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:12:07 by deordone          #+#    #+#             */
/*   Updated: 2023/11/28 18:27:14 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
/* Stefy pro-tip 
typedef struct s_stack
{
	int	len;
	t_list *first;
	t_list *last;
}	t_stack; */
typedef struct s_list
{
	int				number;
	//int				index;
	struct s_list	*next;
}					t_list;
/* ╔═══════════════╗
 * 	 	 Main	
   ╚═══════════════╝	*/
int push_swap(int argc, char **argv, t_list **lst);
/* ╔═══════════════╗
 * 		 Chef
   ╚═══════════════╝	*/
int					ft_atoi(char **argv, int j);
void				ft_attach(char **argv, t_list **lst, int j);
/* ╔═══════════════╗
 * 		checker
   ╚═══════════════╝	*/
int					ft_isvalid(int argc, char **argv);
int					ft_isrepeat(char **argv, t_list **lst);
/* ╔═══════════════╗
 * 		lists
   ╚═══════════════╝	*/
t_list				*ft_newnode(int number);
int					ft_lstsize(t_list *lst);
t_list				*ft_lastnode(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_del(t_list **lst);

#endif
