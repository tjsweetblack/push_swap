/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:09:14 by badriano          #+#    #+#             */
/*   Updated: 2024/08/03 08:50:57 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	//t_list	stack_b;
	
	check_argments(argv, argc);
	 stack_a = (t_list *)malloc(sizeof(t_list));
    if (stack_a == NULL)
    {
        // Handle memory allocation failure
        return 1;
    }
	stack_a->content = 0;
	stack_a->next = NULL;
	stack_a = init_stack_a(argv, argc);
	return (0);
}
