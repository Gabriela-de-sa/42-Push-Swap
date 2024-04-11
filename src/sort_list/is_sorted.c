/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:41:14 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/11 12:51:44 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_is_sorted(t_list **list)
{
	t_list	*lst;

	lst = *list;
	while (lst != NULL)
	{
		if (lst->next != NULL)
		{
			if (lst->data > lst->next->data)
				return (1);
		}
		lst = lst->next;
	}
	return (0);
}
