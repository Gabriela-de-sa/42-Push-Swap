/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:11:28 by gde-sa            #+#    #+#             */
/*   Updated: 2024/04/16 15:47:03 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_push(t_list **stack_a, t_list **stack_b, t_data **data)
{
	int	len;

	len = 3;
	while (len < (*data)->length)
	{
		ft_pb(stack_a, stack_b, data);
		len++;
	}
}

void	ft_order_four_or_five(t_list **stack_a, t_list **stack_b, t_data **data)
{
	ft_push(stack_a, stack_b, data);
	ft_order_three(stack_a, data);
	
	if (ft_min(stack_a) < (*stack_b)->data)
}
