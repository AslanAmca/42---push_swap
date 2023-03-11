/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:25:31 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 10:47:31 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	print_error(char *error_message)
{
	print_string("Error!\n");
	print_string(error_message);
	print_string("\n");
	exit(EXIT_FAILURE);
}
