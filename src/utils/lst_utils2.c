/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:52:40 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/05 14:56:10 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_node_max(t_list **list)
{
	t_list		*lst;
	t_list		*max_node;
	int			max;

	if (!list || !(*list))
		return NULL;
	lst = *list;
	max = lst->data;
	while (lst != NULL)
	{
		if (lst->data > max)
		{
			max = lst->data;
			max_node = lst;
		}
		lst = lst->next;
	}
	return (max_node);
}

t_list	*ft_node_min(t_list **list)
{
	t_list		*lst;
	t_list		*min_node;
	int			min;

	if (!list || !(*list))
		return NULL;
	lst = *list;
	min = lst->data;
	while (lst != NULL)
	{
		if (lst->data < min)
		{
			min = lst->data;
			min_node = lst;
		}
		lst = lst->next;
	}
	return (min_node);
}

t_list	*ft_get_cheapest_node(t_list **stack)
{
	t_list		*lst;

	if (!(*stack))
		return (NULL);
	lst = *stack;
	while (lst != NULL)
	{
		if (lst->cheapest_node == true)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
