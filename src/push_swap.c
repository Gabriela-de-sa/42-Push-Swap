/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:01:55 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/09 15:20:02 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_data	*data;
	t_list	*stack_a;
	//t_list	*lst;

	stack_a = NULL;
	ft_valid_args(argc);
	ft_valid_list(argv);
	data = ft_calloc(1, sizeof(t_data));
	ft_create_stack_a(argv, &data, &stack_a);
	//ft_order_decision(&data, &stack_a);
	ft_clear_stack_a(&stack_a, &data);
}
