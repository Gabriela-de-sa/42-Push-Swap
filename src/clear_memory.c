/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:09:34 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/09 15:21:49 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_clear_stack_a(t_list **list, t_data **data)
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
	free(*data);
	free(*list);
	exit(EXIT_FAILURE);
}

void	ft_clear_stacks(t_list **stack_a, t_list **stack_b, t_data **data)
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
	free(*data);
	free(*stack_a);
	free(*stack_b);
}

int	ft_clear(int option, t_list **stack_a, t_list **stack_b, t_data **data)
{
	if (option == 1)
		ft_clear_stack_a(stack_a, data);
	if (option == 2)
		ft_clear_stacks(stack_a, stack_b, data);
	return (0);
}
