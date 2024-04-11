/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:50:38 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/11 18:15:41 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_order_decision(t_data **data, t_list **stack_a)
{
	if ((*data)->length == 1)
		ft_clear_stack_a(stack_a, data);
	if (ft_is_sorted(stack_a) == 0)
		ft_clear_stack_a(stack_a, data);
	/*if ((*data)->length <= 5)
		ft_sort_small_stack(data, stack_a);*/
}
