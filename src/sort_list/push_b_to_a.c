/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:35:21 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/09 20:50:12 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_rotate_a_b(t_list **stack_a, t_list **stack_b, \
			t_list *cheapest_node)
{
	while ((*stack_a) != cheapest_node->target_node && \
		(*stack_b) != cheapest_node)
		ft_rr(stack_a, stack_b);
	ft_put_index(stack_a);
	ft_put_index(stack_b);
}

static void	ft_rotate_rev_a_b(t_list **stack_a, t_list **stack_b, \
			t_list *cheapest_node)
{
	while (*stack_a != cheapest_node->target_node && \
		*stack_b != cheapest_node)
		ft_rrr(stack_a, stack_b);
	ft_put_index(stack_a);
	ft_put_index(stack_b);
}

void	ft_move_b_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest_node;

	cheapest_node = ft_get_cheapest_node(stack_b);
	if (cheapest_node->above_median && \
		cheapest_node->target_node->above_median)
		ft_rotate_a_b(stack_a, stack_b, cheapest_node);
	else if (!(cheapest_node->above_median) && \
		!(cheapest_node->target_node->above_median))
		ft_rotate_rev_a_b(stack_a, stack_b, cheapest_node);
	ft_check_top(stack_b, cheapest_node, "stack_b");
	ft_check_top(stack_a, cheapest_node->target_node, "stack_a");
	ft_pa(stack_a, stack_b);
}
