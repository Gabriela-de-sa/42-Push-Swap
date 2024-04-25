/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:03:59 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/24 22:30:15 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*void	ft_order_stack_b(t_list **stack_a, t_list **stack_b)
{
	ft_printf("oi");
}*/

t_list	*push_stack_b(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (ft_len_list(stack_a) > 3 && ft_is_sorted(stack_a) == 1)
		ft_pb(stack_a, &stack_b);
	if (ft_len_list(stack_a) > 3 && ft_is_sorted(stack_a) == 1)
		ft_pb(stack_a, &stack_b);
	if (ft_max(&stack_b) != stack_b->data)
		ft_sb(&stack_b, 0);
	/*if (ft_len_list(stack_a) > 3 && ft_is_sorted(stack_a) == 1)
		ft_order_stack_b(stack_a, stack_b);*/
	if (ft_is_sorted(stack_a) == 1)
		ft_order_three(stack_a);
	return (stack_b);
}

void	ft_big_sort(t_list **stack_a)
{
	//int		i;
	t_list	*stack_b;
	//t_list	*lst;

	//stack_b = NULL;
	stack_b = push_stack_b(stack_a);
	/*lst = stack_b;
	while (lst != NULL)
	{
		ft_printf("%i ", lst->data);
		lst = lst->next;
	}*/
}
