/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 08:38:19 by belmiro           #+#    #+#             */
/*   Updated: 2024/08/10 10:17:59 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
//# include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;


void	check_is_digit(char **stack);
char    **create_stack_vector(char **argv, int argc);
char	**create_stack(char **argv, int argc);
void	check_argments(char **argv, int argc);
char	**ft_split(char const *s, char c);
int     ft_isdigit(int c);
void	check_sign_position(char **stack);
int     matrix_size(char **matrix);
long	*create_tab(char **stack);
void    check_is_limit(long *tab, char **matrix );
void    has_duplicates(long *tab, int size);
int     tab_size(long *tab);
void    init_stack_a(char **argv, int argc, t_list **stack_a);
void    ft_error(char *message);
//utils from the libft modified
long	ft_atoi(const char *str);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int value);
char	**ft_split(char const *s, char c);
int     ft_isdigit(int c);
int     ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	printList(t_list* head);
//stack functions
int     is_sorted(t_list **stack);
void	index_stack(t_list *stack);
int	get_min(t_list **stack, int val);
int 	get_distance(t_list **stack, int index);
//rules operations
int     sa(t_list **stack_a);
int     sb(t_list **stack_b);
int     ss(t_list **stack_a, t_list **stack_b);
int     pa(t_list **stack_a, t_list **stack_b);
int     pb(t_list **stack_a, t_list **stack_b);
int     ra(t_list **stack_a);
int     rb(t_list **stack_b);
int     rr(t_list **stack_a, t_list **stack_b);
int     rra(t_list **stack_a);
int     rrb(t_list **stack_b);
int     rrr(t_list **stack_a, t_list **stack_b);
void	ft_free(char **str);
//sorting algotithms
void	sort_3(t_list **stack_a);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
#endif
