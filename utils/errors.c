/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:26:23 by badriano          #+#    #+#             */
/*   Updated: 2024/07/31 18:26:25 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
		stack_pos++;
	}
}
