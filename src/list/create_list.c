/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:27:25 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/04 14:38:11 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	ft_create_node(t_list **head, int number)
{
	t_list	*node;
	t_list	*lst;

	lst = *head;
	node = (t_list *)malloc(sizeof(t_list));
	node->data = number;
	node->next = NULL;
	if (*head == NULL)
	{
		node->previous = NULL;
		*head = node;
		return ;
	}
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = node;
	node->previous = lst;
}

void	ft_create_list(char **str, t_data **data)
{
	int			i;
	t_list		*head;
	int			number;
	t_list		*lst;

	i = 1;
	head = NULL; 
	while (str[i])
	{
		(*data)->length++;
		number = ft_atoi(str[i]);
		ft_create_node(&head, number);
		i++;
	}
}
