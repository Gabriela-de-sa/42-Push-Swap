/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:38:07 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/10 13:43:38 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_check_top(t_list **stack, t_list *top, char *stack_name)
{
	while (*stack != top)
	{
		if (ft_strcmp(stack_name, "stack_a") == 0)
		{
			if (top->above_median)
				ft_ra(stack, 0);
			else
				ft_rra(stack, 0);
		}
		else if (ft_strcmp(stack_name, "stack_b") == 0)
		{
			if (top->above_median)
				ft_rb(stack, 0);
			else
				ft_rrb(stack, 0);
		}
	}
}

static void	ft_rotate_a_b(t_list **stack_a, t_list **stack_b, \
			t_list *cheapest_node)
{
	while ((*stack_b) != cheapest_node->target_node && \
		(*stack_a) != cheapest_node)
		ft_rr(stack_a, stack_b);
	ft_put_index(stack_a);
	ft_put_index(stack_b);
}

static void	ft_rotate_rev_a_b(t_list **stack_a, t_list **stack_b, \
			t_list *cheapest_node)
{
	while (*stack_b != cheapest_node->target_node && \
		*stack_a != cheapest_node)
		ft_rrr(stack_a, stack_b);
	ft_put_index(stack_a);
	ft_put_index(stack_b);
}

void	ft_move_a_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest_node;

	cheapest_node = ft_get_cheapest_node(stack_a);
	if (cheapest_node->above_median && \
		cheapest_node->target_node->above_median)
		ft_rotate_a_b(stack_a, stack_b, cheapest_node);
	else if (!(cheapest_node->above_median) && \
		!(cheapest_node->target_node->above_median))
		ft_rotate_rev_a_b(stack_a, stack_b, cheapest_node);
	ft_check_top(stack_a, cheapest_node, "stack_a");
	ft_check_top(stack_b, cheapest_node->target_node, "stack_b");
	ft_pb(stack_a, stack_b);
}
