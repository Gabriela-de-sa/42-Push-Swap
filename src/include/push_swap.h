/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:52:17 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/14 17:07:18 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../../libft/libft.h"

typedef struct s_data
{
	int		length;
}	t_data;

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

//clear memory alocate
int				ft_clear_stack_a(t_list **list, t_data **data);
int				ft_clear_stacks(t_list **stack_a, t_list **stack_b, \
								t_data **data);
//valid args
void			ft_valid_args(int argc);
int				ft_is_numeric(char *c);
void			ft_validation(char **str, int argc);
//auxiliary functions 
int				ft_strcmp(const char *s1, const char *s2);
int				ft_min(t_list **list);
int				ft_max(t_list **list);
//create stacks
void			ft_create_stack_a(char **str, t_data **data, t_list **head);
void			ft_create_node_last(t_list **list, t_data **data, int number);
void			ft_create_top_node(t_list **list, t_list **stack, \
					t_data **data, int value);
//sorting functions
void			ft_order_decision(t_data **data, t_list **head);
int				ft_is_sorted(t_list **list);
void			ft_sort_small_stack(t_data **data, t_list **stack_a);
//auxiliary functions for sorting
void			ft_sa(t_list **stack_a, t_data **data, int p);
void			ft_sb(t_list **stack_b, t_data **data, int p);
void			ft_ss(t_list **stack_a, t_list **stack_b, t_data **data);
void			ft_ra(t_list **stack_a, t_data **data, int p);
void			ft_rb(t_list **stack_b, t_data **data, int p);
void			ft_rr(t_list **stack_a, t_list **stack_b, t_data **data);
void			ft_rra(t_list **stack_a, t_data **data, int p);
void			ft_rrb(t_list **stack_b, t_data **data, int p);
void			ft_rrr(t_list **stack_a, t_list **stack_b, t_data **data);
void			ft_pa(t_list **stack_a, t_list **stack_b, t_data **data);
void			ft_pb(t_list **stack_a, t_list **stack_b, t_data **data);

#endif