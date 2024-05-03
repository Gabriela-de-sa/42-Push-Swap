/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:03:59 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/03 19:58:23 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	ft_big_sort(t_list **stack_a, int len_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (len_a > 3 && ft_is_sorted(stack_a) == 1)
		ft_pb(stack_a, &stack_b);
	if (len_a > 3 && ft_is_sorted(stack_a) == 1)
		ft_pb(stack_a, &stack_b);
	len_a = ft_len_list(stack_a);
	while (len_a > 3 && ft_is_sorted(stack_a) == 1)
	{
		ft_init_node_a(stack_a, &stack_b);
	}
}
