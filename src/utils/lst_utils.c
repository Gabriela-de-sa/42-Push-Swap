/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:12:07 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/13 15:39:01 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// retorna o menor numero da lista
int	ft_min(t_list **list)
{
	t_list	*lst;
	int		min;

	lst = *list;
	min = lst->data;
	while (lst->next != NULL)
	{
		if (lst->data < min)
			min = lst->data;
		lst = lst->next;
	}
	return (min);
}

// retorna o maior numero da lista
int	ft_max(t_list **list)
{
	t_list	*lst;
	int		max;

	lst = *list;
	max = lst->data;
	while (lst->next != NULL)
	{
		if (lst->data > max)
			max = lst->data;
		lst = lst->next;
	}
	return (max);
}


