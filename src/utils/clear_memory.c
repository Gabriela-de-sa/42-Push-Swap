/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:09:34 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/09 00:21:27 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_clear_stack_a(t_list **list)
{
	t_list	*lst;
	t_list	*next;

	lst = *list;
	while (lst != NULL)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	*list = NULL;
	free(*list);
	return (0);
}

int	ft_clear_stacks(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst;
	t_list	*next;

	lst = *stack_a;
	while (lst != NULL)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	lst = *stack_b;
	while (lst != NULL)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	*stack_a = NULL;
	*stack_b = NULL;
	free(*stack_a);
	free(*stack_b);
	return (0);
}
