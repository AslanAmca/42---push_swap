/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 05:45:47 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/07 20:23:36 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	fill_stack_helper(char **numbers, t_stack **stack)
{
	int		i;
	long	number;

	i = 0;
	while (numbers[i] != NULL)
	{
		number = string_to_integer(numbers[i]);
		if (number > INT_MAX || number < INT_MIN)
		{
			free_stack(*stack);
			free_string_array(numbers);
			print_error();
		}
		else
			append_to_stack(stack, create_stack(number));
		i++;
	}
}

void	fill_stack(char **argv, t_stack **stack)
{
	int		i;
	char	**numbers;

	i = 1;
	while (argv[i] != NULL)
	{
		numbers = string_split(argv[i], ' ');
		fill_stack_helper(numbers, stack);
		free_string_array(numbers);
		i++;
	}
}
