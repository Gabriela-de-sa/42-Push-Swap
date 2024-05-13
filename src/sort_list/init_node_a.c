/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:03:10 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/13 17:18:00 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_put_index(t_list **stack)
{
	int		i;
	int		median;
	t_list	*lst;

	i = 0;
	if (!(*stack))
		return ;
	lst = *stack;
	median = ft_len_list(stack) / 2;
	while (lst != NULL)
	{
		lst->index = i;
		if (i <= median)
			lst->above_median = true;
		else
			lst->above_median = false;
		lst = lst->next;
		++i;
	}
}

void	ft_set_target_a(t_list **stack_a, t_list **stack_b)
{
	t_list		*lst_a;
	t_list		*lst_b;
	t_list		*target_node;
	long		matter_number;

	lst_a = *stack_a;
	while (lst_a != NULL)
	{
		lst_b = *stack_b;
		matter_number = 2147483648;
		while (lst_b != NULL)
		{
			if (lst_a->data > lst_b->data && lst_b->data < matter_number)
			{
				matter_number = lst_b->data;
				target_node = lst_b;
			}
			lst_b = lst_b->next;
		}
		if (matter_number == 2147483648)
			lst_a->target_node = ft_node_max(stack_b);
		else
			lst_a->target_node = target_node;
		lst_a = lst_a->next;
	}
}

void	ft_cost_analysis_a(t_list **stack_a, t_list **stack_b)
{
	int		len_a;
	int		len_b;
	t_list	*lst;

	len_a = ft_len_list(stack_a);
	len_b = ft_len_list(stack_b);
	lst = *stack_a;
	while (lst != NULL)
	{
		lst->push_cost = lst->index;
		if (!(lst->above_median))
			lst->push_cost = len_a - (lst->index);
		if (lst->target_node->above_median)
			lst->push_cost += lst->target_node->index;
		else
			lst->push_cost += len_b - (lst->target_node->index);
		lst = lst->next;
	}
}

void	ft_set_cheapest(t_list **stack)
{
	long		cheapest_value;
	t_list		*cheapest_node;
	t_list		*lst;

	if (!(*stack))
		return ;
	cheapest_value = 2147483648;
	lst = *stack;
	while (lst != NULL)
	{
		if (lst->push_cost < cheapest_value)
		{
			cheapest_value = lst->push_cost;
			cheapest_node = lst;
		}
		lst = lst->next;
	}
	cheapest_node->cheapest_node = true;
}

void	ft_init_node_a(t_list **stack_a, t_list **stack_b)
{
	ft_put_index(stack_a);
	ft_put_index(stack_b);
	ft_set_target_a(stack_a, stack_b);
	ft_cost_analysis_a(stack_a, stack_b);
	ft_set_cheapest(stack_a);
}
