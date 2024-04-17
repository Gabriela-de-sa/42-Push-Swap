/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:35:06 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/17 16:56:40 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rra(t_list **stack_a, int p)
{
	t_list	*lst;
	t_list	*last;

	if ((*stack_a)->next == NULL)
		return ;
	lst = *stack_a;
	last = NULL;
	while (lst->next != NULL)
	{
		last = lst;
		lst = lst->next;
	}
	lst->next = *stack_a;
	*stack_a = lst;
	last->next = NULL;
	if (p == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_list **stack_b, int p)
{
	t_list	*lst;
	t_list	*last;

	if (!(*stack_b) || (*stack_b)->next == NULL)
		return ;
	lst = *stack_b;
	last = NULL;
	while (lst->next != NULL)
	{
		last = lst;
		lst = lst->next;
	}
	lst->next = *stack_b;
	*stack_b = lst;
	last->next = NULL;
	if (p == 0)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rra(stack_a, 1);
	ft_rrb(stack_b, 1);
	write(1, "rrr\n", 4);
}
