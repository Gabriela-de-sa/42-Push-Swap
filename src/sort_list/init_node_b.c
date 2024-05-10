/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:47:14 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/09 20:26:46 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void	ft_init_node_b(t_list **stack_a, t_list **stack_b)
{
	ft_put_index(stack_a);
	ft_put_index(stack_b);
	ft_set_target_b(stack_a, stack_b);
	ft_cost_analysis_b(stack_a, stack_b);
	ft_set_cheapest(stack_b);
}
