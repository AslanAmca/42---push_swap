/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:25:31 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/12 01:45:31 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_error(char *error_message)
{
	print_string("Error!\n");
	print_string(error_message);
	print_string("\n");
	exit(EXIT_FAILURE);
}
