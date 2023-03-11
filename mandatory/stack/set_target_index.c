/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:10:31 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:15:07 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/// @brief set_target_index fonksiyonu için yardımcı fonksiyondur.
/// Birinci algoritma da stack_b deki mevcut değer ile
/// stack_a içerisinde ki tüm değerler karşılaştırılıyor.
/// b'de ki değerden büyük olan elemanların en küçüğü seçiliyor.
/// Birinci algoritmaya göre target_index bulunamazsa,
/// stack_a içerisinde ki en küçük sayının index'ini döner.
/// Bu sayede elemanın olabilecek en küçük yere koyulması sağlanıyor.
/// @param stack_a
/// @param b_value_order
/// @return
static int	calculate_target_index(t_stack **stack_a, int b_value_order)
{
	t_stack	*temp_a;
	int		target_value_order;
	int		b_target_index;

	temp_a = *stack_a;
	target_value_order = INT_MAX;
	b_target_index = 0;
	while (temp_a != NULL)
	{
		if (b_value_order < temp_a->value_order
			&& temp_a->value_order < target_value_order)
		{
			b_target_index = temp_a->index;
			target_value_order = temp_a->value_order;
		}
		temp_a = temp_a->next;
	}
	if (target_value_order != INT_MAX)
		return (b_target_index);
	return (get_smallest_element(stack_a)->index);
}

/// @brief stack_b içerisinde ki elemanlara target_index ataması yapar.
/// target_index, stack_b'deki elemanların
/// stack_a içerisinde ki ulaşması gereken noktadır.
/// @param stack_a atama yapılırken dikkat edilen stack
/// @param stack_b elemanlarına atama yapılacak stack
void	set_target_index(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_b;

	temp_b = *stack_b;
	set_index(stack_a);
	set_index(stack_b);
	while (temp_b != NULL)
	{
		temp_b->target_index = calculate_target_index
			(stack_a, temp_b->value_order);
		temp_b = temp_b->next;
	}
}
