/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:27:25 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/25 15:40:14 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_create_node_last(t_list **list, int number)
{
	t_list	*node;
	t_list	*lst;

	lst = *list;
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		exit(ft_clear_stack_a(list));
	node->data = number;
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

void	ft_create_stack_a(char **str, t_list **stack_a)
{
	int			i;
	int			number;

	i = 1;
	while (str[i])
	{
		number = ft_atoi(str[i]);
		ft_create_node_last(stack_a, number);
		i++;
	}
}
