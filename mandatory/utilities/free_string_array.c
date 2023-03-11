/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_string_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:40:39 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 06:55:00 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_string_array(char **string_array)
{
	int	i;

	i = 0;
	while (string_array[i] != NULL)
	{
		free(string_array[i]);
		string_array[i] = NULL;
		i++;
	}
	free(string_array);
	string_array = NULL;
}
