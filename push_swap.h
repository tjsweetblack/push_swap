/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:50:34 by badriano          #+#    #+#             */
/*   Updated: 2024/07/31 16:50:37 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

void	check_is_digit(char **stack);
char **create_stack_vector(char **argv, int argc);
char	**create_stack(char **argv, int argc);
void	check_argments(char **argv, int argc);
char	**ft_split(char const *s, char c);
int	ft_isdigit(int c);

#endif
