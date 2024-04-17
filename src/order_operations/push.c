/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:00:30 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/17 16:44:47 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_create_top_node(t_list **list, t_list **stack, int value)
{
	t_list	*node;
	t_list	*lst;

	lst = *list;
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		exit(ft_clear_stacks(list, stack));
	node->data = value;
	node->next = NULL;
	*list = node;
	node->next = lst;
}

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst_b;
	int		value;

	if (!(*stack_b))
		return ;
	lst_b = *stack_b;
	value = lst_b->data;
	*stack_b = lst_b->next;
	ft_create_top_node(stack_a, stack_b, value);
	write(1, "pa\n", 3);
}

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst_a;
	int		value;

	if (!(*stack_a))
		return ;
	lst_a = *stack_a;
	value = lst_a->data;
	*stack_a = lst_a->next;
	ft_create_top_node(stack_b, stack_a, value);
	write(1, "pb\n", 3);
}
