/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_small_values_up.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 06:42:32 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:31:12 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/// @brief stack_a içerisinde ki en küçük değeri en tepeye çıkartır.
/// stack_a sıralandıktan sonra hala sıralama işlemi tamamlanmadıysa,
/// en düşük değerlerin en tepede olmadığı anlaşılır.
/// Bu durumda en küçük değeri bulup en üste kaydırmak gerekiyor.
/// @param stack_a kaydırma yapılan stack
/// @param stack_size stack'in eleman sayısı
void	move_small_values_up(t_stack **stack_a, int stack_size)
{
	t_stack	*smallest;

	smallest = get_smallest_element(stack_a);
	set_index(stack_a);
	if (smallest->index > stack_size / 2)
	{
		while (smallest->index < stack_size)
		{
			reverse_rotate_a(stack_a);
			smallest->index++;
		}
	}
	else
	{
		while (smallest->index > 0)
		{
			rotate_a(stack_a);
			smallest->index--;
		}
	}
}
