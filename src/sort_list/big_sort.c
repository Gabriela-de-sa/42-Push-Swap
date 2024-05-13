/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:03:59 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/13 17:32:32 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_big_sort(t_list **stack_a, t_list **stack_b)
{
	int	len_b;
	int	len_a;

	len_a = ft_len_list(stack_a);
	if (len_a > 3 && ft_is_sorted(stack_a) == 1)
		ft_pb(stack_a, stack_b);
	else if (len_a > 3 && ft_is_sorted(stack_a) == 1)
		ft_pb(stack_a, stack_b);
	len_a = ft_len_list(stack_a);
	while (len_a > 3 && ft_is_sorted(stack_a) == 1)
	{
		ft_pb(stack_a, stack_b);
		len_a--;
	}
	ft_order_three(stack_a);
	len_b = ft_len_list(stack_b);
	while (len_b > 0)
	{
		ft_init_node_b(stack_a, stack_b);
		ft_move_b_a(stack_a, stack_b);
		len_b--;
	}
	ft_min_top(stack_a);
}
