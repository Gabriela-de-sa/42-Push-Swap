/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:38:07 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/06 14:10:21 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	ft_rotate_a_b(t_list **stack_a, t_list **stack_b, t_list *cheapest_node)
{
	while (*stack_a != cheapest_node && *stack_b != cheapest_node->target_node)
		ft_rr(stack_a, stack_b);
	ft_put_index(stack_a);
	ft_put_index(stack_b);
}

void	ft_rotate_rev_a_b(t_list **stack_a, t_list **stack_b, \
			t_list *cheapest_node)
{
	while (*stack_a != cheapest_node && *stack_b != cheapest_node->target_node)
		ft_rrr(stack_a, stack_b);
	ft_put_index(stack_a);
	ft_put_index(stack_b);
}

void	ft_push_a_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest_node;

	cheapest_node = ft_get_cheapest_node(stack_a);
	if (cheapest_node->above_median == true && \
		cheapest_node->target_node->above_median == true)
		ft_rotate_a_b(stack_a, stack_b, cheapest_node);
	if (cheapest_node->above_median == false && \
		cheapest_node->target_node->above_median == false)
		ft_rotate_rev_a_b(stack_a, stack_b, cheapest_node);
	ft_check_top(stack_a, cheapest_node, "stack_a");
	ft_check_top(stack_b, (*stack_a)->target_node, "stack_b");
	ft_pb(stack_a, stack_b);
}
