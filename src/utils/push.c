/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:00:30 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/09 15:05:40 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_create_top_node(t_list **list, t_data **data, int value)
{
	t_list	*node;
	t_list	*lst;

	lst = *list;
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		exit(ft_clear(2, list, NULL, data));
	node->data = value;
	node->next = NULL;
	if (*list == NULL)
	{
		node->previous = NULL;
		*list = node;
		return ;
	}
	*list = node;
	node->next = lst;
}

t_list	*ft_pa(t_list **stack_a, t_list **stack_b, t_data **data)
{
	t_list	*lst_b;
	int		value;

	if (!(*stack_b))
		return (*stack_a);
	lst_b = *stack_b;
	value = lst_b->data;
	*stack_b = lst_b->next;
	ft_create_top_node(stack_a, data, value);
	return (*stack_a);
}

t_list	*ft_pb(t_list **stack_a, t_list **stack_b, t_data **data)
{
	t_list	*lst_a;
	int		value;

	if (!(*stack_a))
		return (*stack_b);
	lst_a = *stack_a;
	value = lst_a->data;
	*stack_a = lst_a->next;
	ft_create_top_node(stack_b, data, value);
	return (*stack_b);
}
