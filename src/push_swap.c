/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:01:55 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/11 19:54:24 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_data	*data;
	t_list	*stack_a;
	t_list	*lst;
	t_list	*lstb;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	lstb = stack_b;
	ft_valid_args(argc);
	ft_valid_list(argv);
	data = ft_calloc(1, sizeof(t_data));
	ft_create_stack_a(argv, &data, &stack_a);
	//ft_order_decision(&data, &stack_a);
	ft_rra(&stack_a, &data, 0);
	lst = stack_a;
	printf("stack a\n");
	while (lst != NULL)
	{
		printf("%d", lst->data);
		lst = lst->next;
	}
	printf("\nstack b");
	while (lstb != NULL)
	{
		printf("%d", lst->data);
		lst = lst->next;
	}
}
