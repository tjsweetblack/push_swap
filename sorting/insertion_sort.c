/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 06:54:41 by belmiro           #+#    #+#             */
/*   Updated: 2024/08/06 06:54:56 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../pushswap.h"

void insert_sorted(t_list **stack_b, t_list *node)
{
    t_list *current;

    if (*stack_b == NULL || (*stack_b)->value >= node->value)
    {
        node->next = *stack_b;
        *stack_b = node;
        return;
    }

    current = *stack_b;
    while (current->next != NULL && current->next->value < node->value)
    {
        current = current->next;
    }

    node->next = current->next;
    current->next = node;
}

void reverse_stack(t_list **stack)
{
    t_list *prev = NULL;
    t_list *current = *stack;
    t_list *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *stack = prev;
}

void insertion_sort(t_list **stack_a, t_list **stack_b)
{
    t_list *node;

    // Move elements from stack_a to stack_b
    while (ft_lstsize(*stack_a) > 0)
    {
        pa(stack_b, stack_a); // Move top element from stack_a to stack_b
        node = *stack_b;
        *stack_b = (*stack_b)->next;
        node->next = NULL; // Detach node from stack_b
        insert_sorted(stack_b, node);
    }

    // Reverse stack_b to get ascending order in stack_a
    reverse_stack(stack_b);

    // Move all sorted elements back to stack_a
    while (ft_lstsize(*stack_b) > 0)
    {
        pa(stack_a, stack_b);
    }
}

