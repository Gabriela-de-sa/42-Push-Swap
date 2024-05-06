/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_top.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:13:37 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/06 14:16:01 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_check_top(t_list **stack, t_list *top, char *stack_name)
{
	t_list	*lst;

	lst = *stack;
	while (lst != NULL)
	{
		if (ft_strcmp(stack_name, "stack_a") == 0)
		{
			if (top->above_median == true && top->index != 0)
				ft_ra(stack, 0);
			else if (top->above_median == false && top->index != 0)
				ft_rra(stack, 0);
		}
		else if (ft_strcmp(stack_name, "stack_b") == 0)
		{
			if (top->above_median == true && top->index != 0)
				ft_rb(stack, 0);
			else if (top->above_median == false && top->index != 0)
				ft_rrb(stack, 0);
		}
		ft_put_index(stack);
		lst = lst->next;
	}
}
