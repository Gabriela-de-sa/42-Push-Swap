/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:52:17 by gabriela          #+#    #+#             */
/*   Updated: 2024/04/02 12:50:06 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

/*typedef struct s_list
{
	void			*value;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;*/

void	ft_check_args(int argc);
int		ft_is_numeric(char *c);
void	ft_check_list(char **str);
int		ft_strcmp(const char *s1, const char *s2);

#endif