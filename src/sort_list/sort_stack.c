/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:50:38 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/23 12:14:57 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_small_stack(t_list **stack_a, int len)
{
	if (len < 3)
		ft_sa(stack_a, 0);
	if (len == 3)
		ft_order_three(stack_a);
}

void	ft_order_decision(t_list **stack_a)
{
	int	len;

	len = ft_len_list(stack_a);
	if (len == 1)
		exit(ft_clear_stack_a(stack_a));
	else if (ft_is_sorted(stack_a) == 0)
		exit(ft_clear_stack_a(stack_a));
	else if (len <= 3)
		ft_sort_small_stack(stack_a, len);
	else
		ft_big_sort(stack_a);
}
