/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_string_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:40:39 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 10:47:23 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
