/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:59:28 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/08 18:08:27 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_sa(t_list **stack_a, t_data **data)
{
	int		swap;
	t_list	*lst;

	lst = *stack_a;
	if ((*data)->length <= 1)
		return (*stack_a);
	swap = lst->data;
	lst->data = lst->next->data;
	lst->next->data = swap;
	(*stack_a) = lst;
	return (*stack_a);
}

t_list	*ft_sb(t_list **stack_b, t_data **data)
{
	int		swap;
	t_list	*lst;

	lst = *stack_b;
	if (!(*stack_b) || (*data)->length <= 1)
		return (*stack_b);
	swap = lst->data;
	lst->data = lst->next->data;
	lst->next->data = swap;
	(*stack_b) = lst;
	return (*stack_b);
}

void	ft_ss(t_list **stack_a, t_list **stack_b, t_data **data)
{
	ft_sa(stack_a, data);
	ft_sb(stack_b, data);
}
