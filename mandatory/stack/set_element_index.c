/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_element_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:43:14 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:00:36 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/// @brief stack içerisinde bulunan her elemana index ataması yapar.
/// Index, herhangi bir sayıyı bulundğu stack içerisinde en üstü
/// taşımanın maliyetini hesaplamak için kullanılır.
/// Yani cost_b hesaplaması için kullanılır.
/// 0. index'te olan bir sayı zaten en üstte olduğu için maliyeti yoktur.
/// 2. index'te bulunan sayının maliyeti extra 2 hamledir.
/// 5. index'te bulunan sayının maliyeti extra 5 hamledir.
/// @param stack index ataması yapılacak olan stack
void	set_index(t_stack **stack)
{
	t_stack	*temp;
	int		i;

	temp = *stack;
	i = 0;
	while (temp != NULL)
	{
		temp->index = i;
		temp = temp->next;
		i++;
	}
}
