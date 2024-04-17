/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:31:09 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/17 16:56:12 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_ra(t_list **stack_a, int p)
{
	t_list	*first;
	t_list	*lst;

	if ((*stack_a)->next == NULL)
		return ;
	lst = *stack_a;
	first = lst;
	*stack_a = lst->next;
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = first;
	first->next = NULL;
	if (p == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_list **stack_b, int p)
{
	t_list	*first;
	t_list	*lst;

	if (!(*stack_b) || (*stack_b)->next == NULL)
		return ;
	lst = *stack_b;
	first = lst;
	*stack_b = lst->next;
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = first;
	first->next = NULL;
	if (p == 0)
		write(1, "rb\n", 3);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_ra(stack_a, 1);
	ft_rb(stack_b, 1);
	write(1, "rr\n", 3);
}
