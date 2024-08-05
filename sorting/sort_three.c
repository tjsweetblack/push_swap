/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 08:53:57 by belmiro           #+#    #+#             */
/*   Updated: 2024/08/05 11:46:37 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void    sort_three(t_list *stack_a, t_list *stack_b)
{
    if((stack_a->value > stack_a->next->value) && (stack_a->next->value < stack_a->next->next->value))
    {
        sa(&stack_a);
    }
    else if ((stack_a->value < stack_a->next->value) && (stack_a->next->value > stack_a->next->next->value))
    {
        rra(&stack_a);
        sa(&stack_a);
    }
    else if((stack_a->value > stack_a->next->value) && (stack_a->next->value > stack_a->next->next->value))
    {
        ra(&stack_a);
        sa(&stack_a);
    }
    free(stack_b);
}