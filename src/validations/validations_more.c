/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations_more.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:46:40 by gabriela          #+#    #+#             */
/*   Updated: 2024/06/10 21:56:35 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*ft_check_signal(char *str)
{
	if (str[0] == '+')
		str = str + 1;
	return (str);
}

int	ft_check_duplicates(char *n, char **str, int index)
{
	int		i;

	i = 1;
	while (str[i])
	{
		if (i != index)
		{
			if (ft_strcmp(ft_check_signal(str[i]), n) == 0)
				ft_error();
		}
		i++;
	}
	return (0);
}
