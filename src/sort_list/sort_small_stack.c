/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 19:55:53 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/13 15:39:45 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_order_three_(t_list **stack_a, t_data **data)
{

}

void	ft_sort_small_stack(t_data **data, t_list **stack_a)
{
	if ((*data)->length < 3)
		ft_sa(stack_a, data, 0);
	if ((*data)->length == 3)
		ft_order_three_(stack_a, data);
	/*else
		ft_order_five(lst);*/
}
