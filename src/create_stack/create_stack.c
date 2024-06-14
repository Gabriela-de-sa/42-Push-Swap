/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:27:25 by gabriela          #+#    #+#             */
/*   Updated: 2024/06/14 14:02:45 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_exist_number(int number, t_list **stack_a)
{
	t_list	*lst;

	lst = *stack_a;
	while (lst != NULL)
	{
		if (lst->data == number)
		{
			ft_clear_stack_a(stack_a);
			ft_error();
		}
		lst = lst->next;
	}
}

void	ft_create_node_last(t_list **list, int number)
{
	t_list	*node;
	t_list	*lst;

	lst = *list;
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		exit(ft_clear_stack_a(list));
	node->data = number;
	node->index = 0;
	node->push_cost = 0;
	node->above_median = 0;
	node->target_node = NULL;
	node->cheapest_node = false;
	node->next = NULL;
	if (*list == NULL)
	{
		*list = node;
		return ;
	}
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = node;
}

void	ft_create_stack_a(char *str, t_list **stack_a)
{
	int			number;

	number = ft_atoi(str);
	ft_exist_number(number, stack_a);
	ft_create_node_last(stack_a, number);
}
