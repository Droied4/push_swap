/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:12:07 by deordone          #+#    #+#             */
/*   Updated: 2023/12/10 17:47:07 by carmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				number;
	// int				index;
	struct s_list	*next;
}					t_list;
/* ╔═══════════════╗
 * 			 Main
   ╚═══════════════╝	*/
int					ft_chefsort(t_list **stack_a, t_list **stack_b);

/* ╔═══════════════╗
 * 	  Micro_sorts
   ╚═══════════════╝	*/
void				ft_sort2(t_list **stack_a);
void				ft_sort3(t_list **stack_a);
void				ft_sort4(t_list **stack_a, t_list **stack_b);
void				ft_sort5(t_list **stack_a, t_list **stack_b);

/* ╔═══════════════╗
 * 	  Big Sort
   ╚═══════════════╝	*/
void				ft_bigsort(t_list **stack_a, t_list **stack_b);


/* ╔═══════════════╗
 * 			Utils
   ╚═══════════════╝	*/
int					ft_atoi(char **argv, int j, t_list **stack_a);
int					ft_sort3_cases(t_list **stack_a);
int					ft_min_locator(t_list **stack);
void					ft_putmin_top(t_list **stack_a);

void				print_stack(t_list **stack);
/* ╔═══════════════╗
 * 		Checker
   ╚═══════════════╝	*/
int					ft_isvalid(int argc, char **argv);
int					ft_isrepeated(t_list **stack_a);
int					ft_islimited(long nb, t_list **stack_a);
int					ft_iscorrect(int argc, char **argv, t_list **stack_a);
void				ft_error(void);
/* ╔═══════════════╗
 * 		Swap
   ╚═══════════════╝	*/

void				ft_swap(t_list **stack);
void				sa(t_list **stack_a);
void				sb(t_list **stack_b);
void				ss(t_list **stack_a, t_list **stack_b);

/* ╔═══════════════╗
 * 		Push
   ╚═══════════════╝	*/

void				ft_push(t_list **stack1, t_list **stack2);
void				pa(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_a, t_list **stack_b);

/* ╔═══════════════╗
 * 		Rotate
   ╚═══════════════╝	*/

void				ft_rotate(t_list **stack);
void				ra(t_list **stack_a);
void				rb(t_list **stack_b);
void				rr(t_list **stack_a, t_list **stack_b);
/* ╔═══════════════╗
 * 		Reverse
   ╚═══════════════╝	*/

void				ft_reverse(t_list **stack);
void				rra(t_list **stack_a);
void				rrb(t_list **stack_b);
void				rrr(t_list **stack_a, t_list **stack_b);
/* ╔═══════════════╗
 * 		lists
   ╚═══════════════╝	*/

int					ft_del(t_list **lst);
int					ft_lstsize(t_list *lst);
t_list				*ft_lastnode(t_list *lst);
int					ft_attach(char **argv, t_list **stack, int j);
int					ft_status_sort(t_list *stack_a);

#endif
