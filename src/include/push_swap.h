/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:52:17 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/09 15:17:56 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../../libft/libft.h"

typedef struct s_data
{
	int	length;
}	t_data;

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

//clear memory alocate
void			ft_clear_stack_a(t_list **list, t_data **data);
void			ft_clear_stacks(t_list **stack_a, t_list **stack_b, \
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
//auxiliary functions for sorting
t_list			*ft_sa(t_list **stack_a, t_data **data);
t_list			*ft_sb(t_list **stack_b, t_data **data);
void			ft_ss(t_list **stack_a, t_list **stack_b, t_data **data);
t_list			*ft_ra(t_list **stack_a, t_data **data);
t_list			*ft_rb(t_list **stack_b, t_data **data);
void			ft_rr(t_list **stack_a, t_list **stack_b, t_data **data);
t_list			*ft_rra(t_list **stack_a, t_data **data);
t_list			*ft_rrb(t_list **stack_b, t_data **data);
void			ft_rrr(t_list **stack_a, t_list **stack_b, t_data **data);
t_list			*ft_pa(t_list **stack_a, t_list **stack_b, t_data **data);
t_list			*ft_pb(t_list **stack_a, t_list **stack_b, t_data **data);

#endif