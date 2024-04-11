/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:52:17 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/11 19:49:50 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../../libft/libft.h"

typedef struct s_data
{
	int	length;
	int	print;
}	t_data;

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

//clear memory alocate
void			ft_clear_stack_a(t_list **list, t_data **data);
int				ft_clear_stacks(t_list **stack_a, t_list **stack_b, \
								t_data **data);
int				ft_clear(int option, t_list **stack_a, t_list **stack_b, \
					t_data **data);
//valid args
void			ft_valid_args(int argc);
int				ft_is_numeric(char *c);
void			ft_valid_list(char **str);
//auxiliary functions 
int				ft_strcmp(const char *s1, const char *s2);
//create stacks
void			ft_create_stack_a(char **str, t_data **data, t_list **head);
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