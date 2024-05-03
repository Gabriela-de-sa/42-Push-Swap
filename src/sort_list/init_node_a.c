/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:03:10 by gabriela          #+#    #+#             */
/*   Updated: 2024/05/03 19:24:16 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// funcao coloca o index. Isso decide se o numero vai ficar acima ou embaixo na linha da media
void	ft_put_index(t_list **stack)
{
	int		i;
	int		median;
	t_list	*lst;

	i = 0;
	if (!(*stack))
		return ;
	lst = *stack;
	median = ft_len_list(stack) / 2;
	while (lst != NULL)
	{
		lst->index = i;
		if (i <= median)
			(*stack)->above_median = true;
		else
			lst->above_median = false;
		lst = lst->next;
		i++;
	}
}

// colocar os alvos dos numeros da lista A no numero mais proximo de cada numero
// se o numero da stack A for o menor e tbm da stack b colocar ele como alvo o maior numero da B
void	ft_set_target_a(t_list **stack_a, t_list **stack_b)
{
	t_list		*lst_a;
	t_list		*lst_b;
	t_list		*target_node;
	long		matter_number;

	lst_a = *stack_a;
	while (lst_a != NULL)
	{
		lst_b = *stack_b;
		matter_number = 2147483648;
		while (lst_b != NULL)
		{
			if (lst_a->data > lst_b->data && lst_b->data < matter_number)
			{
				matter_number = lst_b->data;
				target_node = lst_b;
			}
			lst_b = lst_b->next;
		}
		if (matter_number == 2147483648)
			lst_a->target_node = ft_node_max(stack_b);
		else
			lst_a->target_node = target_node;
		lst_a = lst_a->next;
	}
}

// calcula o custa de envio para cada no da stak A para a B
// quantas rotacoes sera necessario para o alvo e o no da A estar no topo
void	ft_cost_analysis_a(t_list **stack_a, t_list **stack_b)
{
	int		len_a;
	int		len_b;
	t_list	*lst;

	len_a = ft_len_list(stack_a);
	len_b = ft_len_list(stack_b);
	lst = *stack_a;
	lst->push_cost = 0;
	while (lst != NULL)
	{
		lst->push_cost = lst->index;
		// se o numero de A estiver abaixo d media calcula o len de a menos index
		if (lst->above_median == false)
			lst->push_cost = len_a - lst->index;
		// se o numero que é alvo de A estiver acima da media, acrescenta ao valor o index do alvo na B
		if (lst->target_node->above_median == true)
			lst->push_cost += lst->target_node->index;
		// se for falso é somente acrescentar o a subtracao de len_b - index do alvo de B
		else
			lst->push_cost += len_b - lst->target_node->index;
		lst = lst->next;
	}
}

// define como true o no mais barato que vai ir para a stack_b
void	ft_set_cheapest(t_list **stack)
{
	long		cheapest_value;
	t_list		*cheapest_node;
	t_list		*lst;

	if (!(*stack))
		return ;
	cheapest_value = 2147483648;
	lst = *stack;
	while (lst != NULL)
	{
		if (lst->push_cost < cheapest_value)
		{
			cheapest_value = lst->push_cost;
			cheapest_node = lst;
		}
		lst = lst->next;
	}
	cheapest_node->cheapest_node = true;
}

void	ft_init_node_a(t_list **stack_a, t_list **stack_b)
{
	ft_put_index(stack_a);
	ft_put_index(stack_b);
	ft_set_target_a(stack_a, stack_b);
	ft_cost_analysis_a(stack_a, stack_b);
	ft_set_cheapest(stack_a);
}
