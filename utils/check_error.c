/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:36:23 by badriano          #+#    #+#             */
/*   Updated: 2024/08/02 10:08:29 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
int *create_tab(char **stack)
{
	int *tab;
	int size;
	int i;
	
	size = matrix_size(stack);
	i = 0;
	tab = (int *) malloc (sizeof(long int) * (size));
	while(i < size)
	{
		tab[i] = ft_atoi(stack[i]);
		i++;
	}
	return(tab);
}
char **create_stack_vector(char **argv, int argc)
{
	char	**stack;
	int		stack_count;
	int		arg_count;
	
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
	int *tab;
	int i;
	
	i = 0;
	stack = create_stack(argv, argc);
	check_is_digit(stack);
	check_sign_position(stack);
	tab = create_tab(stack);
	check_is_limit(tab);
	while (stack[i] != NULL)
	{
		printf("%s\n", stack[i]);
		i++;
	}
	int size = tab_size(tab);
	i = 0;
	printf("%d\n\n", size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	//check_duplicate(stack);
}
