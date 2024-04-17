/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:59:28 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/17 16:56:23 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sa(t_list **stack_a, int p)
{
	int		swap;
	t_list	*lst;

	lst = *stack_a;
	if ((*stack_a)->next == NULL)
		return ;
	swap = lst->data;
	lst->data = lst->next->data;
	lst->next->data = swap;
	(*stack_a) = lst;
	if (p == 0)
		write(1, "sa\n", 3);
}

void	ft_sb(t_list **stack_b, int p)
{
	int		swap;
	t_list	*lst;

	lst = *stack_b;
	if (!(*stack_b) || (*stack_b)->next == NULL)
		return ;
	swap = lst->data;
	lst->data = lst->next->data;
	lst->next->data = swap;
	(*stack_b) = lst;
	if (p == 0)
		write(1, "sb\n", 3);
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_sa(stack_a, 1);
	ft_sb(stack_b, 1);
	write(1, "ss\n", 3);
}
