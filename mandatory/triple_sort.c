/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:56:41 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/09 00:46:00 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/// @brief stack içerisinde ki ilk 3 elemanı sıralar.
/// algoritma en büyük elemanı en sona alarak çalışır.
/// ilk eleman en büyükse ra yeterli olacaktır.
/// ortanca eleman en büyükse rra ile sonda ki eleman en başa gider.
/// son eleman zaten en büyükse veya
/// yukarıda ki işlemlerden sonra en en büyük olmuşsa,
/// sıralama tamamlandı mı diye son bir kontrol yapıyoruz.
/// sıralama bitmediyse ilk ve ikinci elemanı değiştirmek yeterli.
/// @param stack_a 3 elemanı sıralacak olan stack
void	triple_sort(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value > (*stack_a)->next->next->value)
		rotate_a(stack_a);
	else if ((*stack_a)->next->value > (*stack_a)->value
		&& (*stack_a)->next->value > (*stack_a)->next->next->value)
		reverse_rotate_a(stack_a);
	if ((*stack_a)->value > (*stack_a)->next->value)
		swap_a(stack_a);
}
