/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:50:38 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/16 14:01:20 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_small_stack(t_data **data, t_list **stack_a, t_list **stack_b)
{
	if ((*data)->length < 3)
		ft_sa(stack_a, data, 0);
	if ((*data)->length == 3)
		ft_order_three(stack_a, data);
	else
		ft_order_four_or_five(stack_a, stack_b, data);
}

void	ft_order_decision(t_data **data, t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if ((*data)->length == 1)
		ft_clear_stack_a(stack_a, data);
	else if (ft_is_sorted(stack_a) == 0)
		ft_clear_stack_a(stack_a, data);
	else if ((*data)->length <= 5)
		ft_sort_small_stack(data, stack_a, stack_b);
}
