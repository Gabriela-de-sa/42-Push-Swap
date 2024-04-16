/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:31:09 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/11 19:48:46 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_ra(t_list **stack_a, t_data **data, int p)
{
	t_list	*first;
	t_list	*lst;

	if ((*data)->length <= 1)
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

void	ft_rb(t_list **stack_b, t_data **data, int p)
{
	t_list	*first;
	t_list	*lst;

	if (!(*stack_b) || (*data)->length <= 1)
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

void	ft_rr(t_list **stack_a, t_list **stack_b, t_data **data)
{
	ft_ra(stack_a, data, 1);
	ft_rb(stack_b, data, 1);
	write(1, "rr\n", 3);
}
