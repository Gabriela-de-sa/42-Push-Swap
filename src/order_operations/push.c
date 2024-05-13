/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:00:30 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/13 14:42:08 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_create_top_node(t_list **list, t_list **stack, int value)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		exit(ft_clear_stacks(list, stack));
	node->data = value;
	node->next = *list;
	*list = node;
}

/*void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	int		value;

	if (!(*stack_b))
		return ;
	temp = *stack_b;
	value = (*stack_b)->data;
	*stack_b = (*stack_b)->next;
	free(temp);
	ft_create_top_node(stack_a, stack_b, value);
	write(1, "pa\n", 3);
}*/

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	//int		value;

	if (!(*stack_b))
		return ;
	temp = *stack_b;
	//value = (*stack_b)->data;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
	//free(temp);
	//ft_create_top_node(stack_a, stack_b, value);
	write(1, "pa\n", 3);
}

/*void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	//t_list	*temp;
	int		value;
	

	if (!(*stack_a))
		return ;
	//temp = *stack_a;
	value = (*stack_a)->data;
	*stack_a = (*stack_a)->next;
	//free(temp);
	ft_create_top_node(stack_b, stack_a, value);
	write(1, "pb\n", 3);
}*/
void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	//int		value;
	

	if (!(*stack_a))
		return ;
	temp = *stack_a;
	//value = (*stack_a)->data;
	*stack_a = (*stack_a)->next;
	temp->next = (*stack_b);
	*stack_b = temp;
	//ft_create_top_node(stack_b, stack_a, value);
	write(1, "pb\n", 3);
}
