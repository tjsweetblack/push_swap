/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intit_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 08:45:50 by belmiro           #+#    #+#             */
/*   Updated: 2024/08/10 08:18:51 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void    init_stack_a(char **argv, int argc, t_list **stack_a)
{
    char    **matrix;
    long    *tab;
    t_list  *new;
    int     size;
    int     i;
    
    matrix = create_stack(argv, argc);
    tab = create_tab(matrix);
    size = matrix_size(matrix);
    i = 0;
    while(i < size)
    {
        new = ft_lstnew((int)tab[i]);
        ft_lstadd_back(stack_a, new);
        i++;
    }
	if (argc == 2)
    {
        ft_free(matrix);
    }
}

