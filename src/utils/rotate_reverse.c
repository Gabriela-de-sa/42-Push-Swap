/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:35:06 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/09 12:50:57 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_rra(t_list **stack_a, t_data **data)
{
	t_list	*lst;
	t_list	*last;

	if ((*data)->length <= 1)
		return (*stack_a);
	lst = *stack_a;
	last = NULL;
	while (lst->next != NULL)
	{
		last = lst;
		lst = lst->next;
	}
	lst->next = *stack_a;
	*stack_a = lst;
	last->next = NULL;
	return (*stack_a);
}

t_list	*ft_rrb(t_list **stack_b, t_data **data)
{
	t_list	*lst;
	t_list	*last;

	if (!(*stack_b) || (*data)->length <= 1)
		return (*stack_b);
	lst = *stack_b;
	last = NULL;
	while (lst->next != NULL)
	{
		last = lst;
		lst = lst->next;
	}
	lst->next = *stack_b;
	*stack_b = lst;
	last->next = NULL;
	return (*stack_b);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b, t_data **data)
{
	ft_rra(stack_a, data);
	ft_rrb(stack_b, data);
}
