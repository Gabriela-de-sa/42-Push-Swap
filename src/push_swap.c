/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:01:55 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/10 13:29:18 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		len_a;

	stack_a = NULL;
	stack_b = NULL;
	ft_validation(argv, argc);
	ft_create_stack_a(argv, &stack_a);
	len_a = ft_len_list(&stack_a);
	if (len_a == 1)
		exit(ft_clear_stacks(&stack_a, &stack_b));
	else if (ft_is_sorted(&stack_a) == 0)
		exit(ft_clear_stacks(&stack_a, &stack_b));
	else if (len_a < 3)
		ft_sa(&stack_a, 0);
	else if (len_a == 3)
		ft_order_three(&stack_a);
	else
		ft_big_sort(&stack_a, &stack_b);
	ft_clear_stacks(&stack_a, &stack_b);
	exit(EXIT_SUCCESS);
}
