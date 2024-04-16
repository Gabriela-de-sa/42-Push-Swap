/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:27:25 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/12 13:42:00 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_create_node_last(t_list **list, t_data **data, int number)
{
	t_list	*node;
	t_list	*lst;

	lst = *list;
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		exit(ft_clear_stack_a(list, data));
	node->data = number;
	node->next = NULL;
	if (*list == NULL)
	{
		node->previous = NULL;
		*list = node;
		return ;
	}
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = node;
	node->previous = lst;
}

void	ft_create_stack_a(char **str, t_data **data, t_list **stack_a)
{
	int			i;
	int			number;

	i = 1;
	while (str[i])
	{
		(*data)->length++;
		number = ft_atoi(str[i]);
		ft_create_node_last(stack_a, data, number);
		i++;
	}
}

/*void	ft_create_stack_b(t_list **stack_b, int number)
{
	
}*/
