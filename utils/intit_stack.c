/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intit_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 08:45:50 by belmiro           #+#    #+#             */
/*   Updated: 2024/08/03 09:02:11 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../pushswap.h"

t_list  *init_stack_a(char **argv, int argc)
{
    char    **stack;
    long    *tab;
    t_list  *new;
    int     size;
    t_list  *stack_a;
    
    stack = create_stack(argv, argc);
    tab = create_tab(stack);
    size = matrix_size(stack);
    stack_a->content = (int)tab[size - 1];
    size--;
    stack_a->next = NULL;
    while(size--)
    {
        new = ft_lstnew((int)tab[size]);
        ft_lstadd_front(&stack_a, new);
    }
    return(stack_a);
}