/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:04:16 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:35:05 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/// @brief Fonksiyon, push_all_but_three adlı bir fonksiyon çağırarak,
/// stack_a yığınındaki tüm elemanları stack_b yığınına taşır ve
/// son üç elemanı stack_a yığınında saklar.
/// Bu işlem, daha verimli bir sıralama işlemi yapmak için,
/// küçük sayıda elemanın stack_a yığınında kalmasını sağlar.
///
/// Daha sonra, triple_sort adlı bir fonksiyon çağırarak,
/// stack_a yığınındaki son üç elemanı sıralar.
/// Bu işlem, daha önce bahsedildiği gibi,
/// sadece üç elemanın sıralanmasını gerektirir ve daha az adım gerektirir.
///
/// Daha sonra, stack_b yığınındaki elemanları stack_a yığınına taşımak için,
/// set_target_index, calculate_and_set_cost ve move adlı
/// üç fonksiyon kullanılarak en uygun hareketler hesaplanır ve yapılır.
///
/// Son olarak, is_sorted_stack adlı bir fonksiyon kullanılarak,
/// stack_a yığınının sıralı olup olmadığı kontrol edilir ve gerekirse,
/// move_small_values_up adlı bir fonksiyon kullanılarak, elemanlar kaydırılır.
///
/// Tüm bu işlemler sonucunda, stack_a yığınındaki elemanlar sıralanır
/// ve stack_b yığını boşaltılır.
/// @param stack_a sayıların toplandığı ve sıralanacağı stack
/// @param stack_b algoritma için kullanılacak boş stack
void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_a_size;

	stack_a_size = get_stack_size(*stack_a);
	if (is_sorted_stack(*stack_a))
		return ;
	if (stack_a_size == 2)
		swap_a(stack_a);
	else if (stack_a_size == 3)
		triple_sort(stack_a);
	else
	{
		push_all_but_three(stack_a, stack_b, stack_a_size);
		triple_sort(stack_a);
		while (*stack_b != NULL)
		{
			set_target_index(stack_a, stack_b);
			calculate_and_set_cost(stack_a, stack_b);
			move(stack_a, stack_b);
		}
		if (!is_sorted_stack(*stack_a))
			move_small_values_up(stack_a, stack_a_size);
	}
}
