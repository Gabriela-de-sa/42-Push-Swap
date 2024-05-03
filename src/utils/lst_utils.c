/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:12:07 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/25 16:41:24 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_min(t_list **list)
{
	t_list	*lst;
	int		min;

	lst = *list;
	min = lst->data;
	while (lst != NULL)
	{
		if (lst->data < min)
			min = lst->data;
		lst = lst->next;
	}
	return (min);
}

int	ft_max(t_list **list)
{
	t_list	*lst;
	int		max;

	lst = *list;
	max = lst->data;
	while (lst != NULL)
	{
		if (lst->data > max)
			max = lst->data;
		lst = lst->next;
	}
	return (max);
}

int	ft_find_index(t_list **list, int number)
{
	t_list	*lst;
	int		index;

	lst = *list;
	index = 0;
	while (lst != NULL)
	{
		if (lst->data == number)
			return (index);
		index++;
		lst = lst->next;
	}
	return (index);
}

int	ft_len_list(t_list **list)
{
	t_list	*lst;
	int		len;

	len = 0;
	lst = (*list);
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

int	ft_last_lst(t_list **stack)
{
	t_list	*lst;
	int		value;

	lst = *stack;
	while (lst != NULL)
		lst = lst->next;
	value = lst->data;
	return (value);
}
