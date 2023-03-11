/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:13:53 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 11:06:05 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

/// @brief stack'in eleman sayısını bulur ve geriye döner.
/// @param stack eleman sayısı hesaplanan stack
/// @return stack'in eleman sayısı
int	get_stack_size(t_stack	*stack)
{
	int	size;

	size = 0;
	if (stack == NULL)
		return (0);
	while (stack != NULL)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}
