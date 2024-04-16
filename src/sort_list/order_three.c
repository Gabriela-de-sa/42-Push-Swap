/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_three.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 19:55:53 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/16 13:36:40 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_order_three(t_list **stack_a, t_data **data)
{
	if (ft_min(stack_a) == (*stack_a)->data)
	{
		ft_rra(stack_a, data, 0);
		ft_sa(stack_a, data, 0);
	}
	else if (ft_max(stack_a) == (*stack_a)->data)
	{
		ft_ra(stack_a, data, 0);
		if (ft_is_sorted(stack_a) == 1)
			ft_sa(stack_a, data, 0);
	}
	else
	{
		if (ft_find_index(stack_a, ft_max(stack_a)) == 1)
		{
			ft_rra(stack_a, data, 0);
			if (ft_is_sorted(stack_a) == 1)
				ft_sa(stack_a, data, 0);
		}
		else
			ft_sa(stack_a, data, 0);
	}
}
