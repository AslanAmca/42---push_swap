/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:56:22 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 13:57:47 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	handle_int_error(char **numbers)
{
	free_string_array(numbers);
	print_error("Some arguments aren’t integers.");
}

static int	is_int_value(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	while (arg[i] != '\0')
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	validate_int(char **argv)
{
	int		i;
	int		j;
	char	**numbers;

	i = 1;
	numbers = NULL;
	while (argv[i] != NULL)
	{
		numbers = string_split(argv[i], ' ');
		if (*numbers == NULL)
			handle_int_error(numbers);
		j = 0;
		while (numbers[j] != NULL)
		{
			if (!is_int_value(numbers[j]))
				handle_int_error(numbers);
			j++;
		}
		free_string_array(numbers);
		i++;
	}
}
