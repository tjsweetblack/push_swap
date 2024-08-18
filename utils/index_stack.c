/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 06:39:24 by belmiro           #+#    #+#             */
/*   Updated: 2024/08/12 06:51:06 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static t_list	*get_next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->value < min->value))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	set_index_to_negative(t_list *stack)
{
	while (stack)
	{
		stack->index = -1;
		stack = stack->next;
	}
}

void	index_stack(t_list *stack)
{
	t_list	*current;
	int		i;

	i = 0;
	set_index_to_negative(stack);
	current = get_next_min(&stack);
	while (current)
	{
		current->index = i++;
		current = get_next_min(&stack);
	}
}
