/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:26:23 by badriano          #+#    #+#             */
/*   Updated: 2024/08/04 08:28:04 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	check_is_digit(char **stack)
{
	int	num_pos;
	int	stack_pos;
	
	stack_pos = 0;
	num_pos = 0;
	while (stack[stack_pos] != NULL)
	{
		while (stack[stack_pos][num_pos] != '\0')
		{
			if (stack[stack_pos][num_pos] == '-' || stack[stack_pos][num_pos] == '+')
				num_pos++;
			if(!(ft_isdigit(stack[stack_pos][num_pos])))
			{
				printf("error");
				exit(0);
			}
			num_pos++;
		}
		num_pos = 0;
		stack_pos++;
	}
}
void	check_is_sign_position(char **stack, int stack_pos, int num_pos)
{
	if(ft_isdigit(stack[stack_pos][num_pos - 1]))
	{
		printf("error");
		exit(0);
	}
	if(stack[stack_pos][num_pos + 1] == '\0')
	{
		printf("error");
		exit(0);
	}	
}
void	check_sign_position(char **stack)
{
	int	num_pos;
	int	stack_pos;
	
	stack_pos = 0;
	num_pos = 0;
	while (stack[stack_pos] != NULL)
	{
		while (stack[stack_pos][num_pos] != '\0')
		{
			if (stack[stack_pos][num_pos] == '-' || stack[stack_pos][num_pos] == '+')
			{
				check_is_sign_position(stack, stack_pos, num_pos);	
			}
			num_pos++;
		}
		num_pos = 0;
		stack_pos++;
	}
}
void check_is_limit(long *tab, char **matrix )
{
	int	i;
	int size;

	i = 0;
	size = matrix_size(matrix);
	while(i < size)
	{
		if (tab[i] > 2147483648 || tab[i] < -2147483648)
		{
			printf("error");
			exit(0);
		}
		i++;
	}
}
void has_duplicates(long *tab, int size)
{
    int i;
    int j;
    
    i = 0;
    while (i < size) 
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] == tab[j])
            {
                printf("error");
                exit(0);
            }
            j++;
        }
        i++;
    }
}
