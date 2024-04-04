/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:52:17 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/04 14:17:25 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../../libft/libft.h"

typedef struct s_data
{
	int	length;
}	t_data;

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

void			ft_valid_args(int argc);
int				ft_is_numeric(char *c);
void			ft_valid_list(char **str);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_create_list(char **str, t_data **data);

#endif