/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:47:14 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/13 17:51:42 by gde-sa           ###   ########.fr       */
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

void	ft_set_target_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst_a;
	t_list	*lst_b;
	t_list	*target_node;
	long	matter_number;

	lst_b = *stack_b;
	while (lst_b != NULL)
	{
		matter_number = 2147483648;
		lst_a = *stack_a;
		while (lst_a)
		{
			if (lst_a->data > lst_b->data && lst_a->data < matter_number)
			{
				matter_number = lst_a->data;
				target_node = lst_a;
			}
			lst_a = lst_a->next;
		}
		if (matter_number == 2147483648)
			lst_b->target_node = ft_node_min(stack_a);
		else
			lst_b->target_node = target_node;
		lst_b = lst_b->next;
	}
}

void	ft_cost_analysis_b(t_list **stack_a, t_list **stack_b)
{
	int		len_a;
	int		len_b;
	t_list	*lst;

	len_a = ft_len_list(stack_a);
	len_b = ft_len_list(stack_b);
	lst = *stack_b;
	while (lst != NULL)
	{
		lst->push_cost = lst->index;
		if (!(lst->above_median))
			lst->push_cost = len_b - (lst->index);
		if (lst->target_node->above_median)
			lst->push_cost += lst->target_node->index;
		else
			lst->push_cost += len_a - (lst->target_node->index);
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

void	ft_init_node_b(t_list **stack_a, t_list **stack_b)
{
	ft_put_index(stack_a);
	ft_put_index(stack_b);
	ft_set_target_b(stack_a, stack_b);
	ft_cost_analysis_b(stack_a, stack_b);
	ft_set_cheapest(stack_b);
}
