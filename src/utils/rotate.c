/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:31:09 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/08 13:28:31 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_ra(t_list **stack_a, t_data **data)
{
	int		swap;
	t_list	*lst;

	if ((*data)->length <= 1)
		return (*stack_a);
	lst = *stack_a;
	swap = (*stack_a)->data;
	while (lst)
	{
		if (lst->previous != NULL)
			lst->previous->data = lst->data;
		if (lst->next != NULL)
			lst->data = lst->next->data;
		if (lst->next == NULL)
			lst->data = swap;
		lst = lst->next;
	}
	return (*stack_a);
}

t_list	*ft_rb(t_list **stack_b, t_data **data)
{
	int		swap;
	t_list	*lst;

	if (!(*stack_b) || (*data)->length <= 1)
		return (*stack_b);
	lst = *stack_b;
	swap = (*stack_b)->data;
	while (lst)
	{
		if (lst->previous != NULL)
			lst->previous->data = lst->data;
		if (lst->next != NULL)
			lst->data = lst->next->data;
		if (lst->next == NULL)
			lst->data = swap;
		lst = lst->next;
	}
	return (*stack_b);
}

void	ft_rr(t_list **stack_a, t_list **stack_b, t_data **data)
{
	ft_ra(stack_a, data);
	ft_rb(stack_b, data);
}
