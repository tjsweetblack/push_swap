/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:09:14 by badriano          #+#    #+#             */
/*   Updated: 2024/08/06 06:58:54 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
	{
		sa(stack_a);
		free(stack_b);
	}else if (size == 3)
	{
		sort_three(*stack_a, *stack_b);
	}else
	{
		insertion_sort(stack_a, stack_b);
	}
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
	printList(*stack_a);
	printf("stack\n");
	if(is_sorted(stack_a))
	{
		return (0);
	}
	else
	{
		sort_stack(stack_a, stack_b);
		printf("\n");
		printList(*stack_a);
	}
	return (0);
}
