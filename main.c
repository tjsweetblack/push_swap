/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:09:14 by badriano          #+#    #+#             */
/*   Updated: 2024/08/13 08:38:49 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	check_argments(argv, argc);
	stack_a = (t_list **)malloc(sizeof(t_list));
	if (stack_a == NULL)
		return (1);
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (stack_b == NULL)
		return (1);
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack_a(argv, argc, stack_a);
	index_stack(*stack_a);
	if (is_sorted(stack_a))
	{
		return (0);
	}
	else
	{
		sort_stack(stack_a, stack_b);
	}
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
