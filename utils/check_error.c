/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:36:23 by badriano          #+#    #+#             */
/*   Updated: 2024/07/31 17:36:24 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
char **create_stack_vector(char **argv, int argc)
{
	char	**stack;
	int	stack_count;
	int	arg_count;
	
	stack_count = 0;
	arg_count = 1;
	stack = (char **) malloc(sizeof(char *) * argc);
	while(arg_count < argc)
	{
		stack[stack_count] = argv[arg_count];
		stack_count++;
		arg_count++;
	}
	stack[stack_count] = NULL;
	return (stack);	
}

char	**create_stack(char **argv, int argc)
{
	char	**stack;

	if (argc == 2)
	{
		stack = ft_split(argv[1], ' ');
	}
	else if(argc > 2)
	{
		stack = create_stack_vector(argv, argc);
	}
	return(stack);
}

void	check_argments(char **argv, int argc)
{
	char  **stack;
	int i;
	
	i = 0;
	stack = create_stack(argv, argc);
	//check_is_digit(stack);
	while (stack[i] != NULL)
	{
		printf("%s", stack[i]);
		i++;
	}
	//check_duplicate(stack);
}
