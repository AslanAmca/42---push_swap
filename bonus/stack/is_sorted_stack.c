/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:03:09 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 11:06:07 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

/// @brief stack'in sıralı olup olmadığını bulur.
/// Sıralama yönü olarak küçükten büyüğe olmalıdır.
/// @param stack bakılacak olan stack
/// @return stack sıralı veya değil
int	is_sorted_stack(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
