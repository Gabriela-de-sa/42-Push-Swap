/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_min_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:29:29 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/08 19:15:20 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_min_top(t_list **stack_a)
{
	ft_put_index(stack_a);
	while ((*stack_a)->data != ft_node_min(stack_a)->data)
	{
		if (ft_node_min(stack_a)->above_median)
			ft_ra(stack_a, 0);
		else
			ft_rra(stack_a, 0);
	}
}
