/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 08:38:19 by belmiro           #+#    #+#             */
/*   Updated: 2024/08/03 08:42:23 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
void	check_is_digit(char **stack);
char    **create_stack_vector(char **argv, int argc);
char	**create_stack(char **argv, int argc);
void	check_argments(char **argv, int argc);
char	**ft_split(char const *s, char c);
int     ft_isdigit(int c);
void	check_sign_position(char **stack);
int     matrix_size(char **matrix);
long	*create_tab(char **stack);
void    check_is_limit(long *tab);
void    has_duplicates(long *tab, int size);
int     tab_size(long *tab);
t_list  *init_stack_a(char **argv, int argc);
#endif