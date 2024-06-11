/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:08:06 by gabriela          #+#    #+#             */
/*   Updated: 2024/06/10 21:46:56 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	ft_is_int(char *nptr)
{
	int			i;
	int			sign;
	long int	result;

	sign = 1;
	result = 0;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' || \
			nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	if (sign * result < -2147483648 || sign * result > 2147483647)
		ft_error();
	return (0);
}

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		ft_error();
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			ft_error();
		i++;
	}
	return (0);
}

void	ft_validation(char **str, int argc)
{
	int	i;

	if (argc < 2)
		exit(EXIT_FAILURE);
	i = 1;
	while (str[i])
	{
		ft_is_numeric(str[i]);
		ft_is_int(str[i]);
		ft_check_duplicates(str[i], str, i);
		i++;
	}
}
