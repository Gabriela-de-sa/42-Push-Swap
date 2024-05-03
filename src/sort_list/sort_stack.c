/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:50:38 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/29 19:11:13 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_order_decision(t_list **stack_a)
{
	int	len_a;

	len_a = ft_len_list(stack_a);
	if (len_a == 1)
		exit(ft_clear_stack_a(stack_a));
	else if (ft_is_sorted(stack_a) == 0)
		exit(ft_clear_stack_a(stack_a));
	else if (len_a < 3)
		ft_sa(stack_a, 0);
	else if (len_a == 3)
		ft_order_three(stack_a);
	else
		ft_big_sort(stack_a, len_a);
}
