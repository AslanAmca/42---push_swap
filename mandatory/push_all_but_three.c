/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_but_three.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:27:28 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:35:28 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_half(t_stack **a, t_stack **b, int a_size, int *push)
{
	while (a_size >= 6 && *push < a_size / 2)
	{
		if ((*a)->value_order <= a_size / 2)
		{
			push_b(a, b);
			(*push)++;
		}
		else
			rotate_a(a);
	}
}

static void	push_remaining_half(t_stack **a, t_stack **b, int a_size, int *push)
{
	while (a_size >= 6 && *push < a_size / 4 * 3)
	{
		if ((*a)->value_order <= a_size / 4 * 3)
		{
			push_b(a, b);
			(*push)++;
		}
		else
			rotate_a(a);
	}
}

/// @brief En büyük 3 eleman hariç a da bulunan tüm elemanları b'ye iter.
/// Bu elemanları iterken küçük değerlere öncelik vermeye çalışır.
/// Bunun 2 tane faydası vardır;
/// 1- küçük değerler birbirlerine yakın oldukları ve büyük değerleden
/// ayıklandıkları için sıralama yapmak daha az hamle gerektirecek.
/// 2- b'nin en üstünde büyük değerler olacak,
/// push mantığından ötürü a'ya itildiklerinde en alta inmiş olacaklar ve
/// küçük değerler onların üstünde olacak.
/// @param a elemanların bulunduğu stack
/// @param b elemanların push'lanacağı stack
/// @param a_size a'nin eleman sayısı
void	push_all_but_three(t_stack **a, t_stack **b, int a_size)
{
	int	push;

	push = 0;
	push_half(a, b, a_size, &push);
	push_remaining_half(a, b, a_size, &push);
	while (a_size - push > 3)
	{
		push_b(a, b);
		push++;
	}
}
