/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:09:14 by badriano          #+#    #+#             */
/*   Updated: 2024/08/04 10:48:51 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
void printList(t_list* head) {
    t_list* current = head; // Start with the head node
    while (current != NULL) {
        printf("%d\n", current->value); // Print the data in the current node
        current = current->next;       // Move to the next node
    }
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	//t_list	stack_b;
	
	check_argments(argv, argc);
	stack_a = (t_list **)malloc(sizeof(t_list));
    if (stack_a == NULL)
    {
        // Handle memory allocation failure;
        return 1;
    }
	*stack_a = NULL;;
	init_stack_a(argv, argc, stack_a);
	printList(*stack_a);
	printf("stack\n");
	if(is_sorted(stack_a))
	{
		printf("sorted!");
	}
	else
	{
		sort_stack(stack_a, stack_b);
		sa(stack_a);
		printf("\n");
		printList(*stack_a);
	}
	return (0);
}
