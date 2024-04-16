/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:01:55 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/14 17:11:07 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	t_list	*stack_a;

	stack_a = NULL;
	ft_validation(argv, argc);
	data = ft_calloc(1, sizeof(t_data));
	ft_create_stack_a(argv, &data, &stack_a);
	ft_order_decision(&data, &stack_a);
	ft_clear_stack_a(&stack_a, &data);
}
