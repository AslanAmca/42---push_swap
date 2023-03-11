/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_second_last_element.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:33:45 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 14:36:10 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

/// @brief stack'in sondan bir önceki elemanını bulur ve geriye döner.
/// @param stack arama yapılan stack
/// @return stack'in sondan bir önceki elemanını
t_stack	*get_second_last_element(t_stack *stack)
{
	if (stack == NULL || stack->next == NULL)
		return (NULL);
	while (stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}
