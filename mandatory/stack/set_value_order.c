/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_value_order.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:21:19 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 06:57:53 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/// @brief stack içerisinde bulunan ve
/// henüz value_order'i belirlenmemiş olan elemanların en büyüğünü bulur.
/// Böylelikle dönen elemana doğru value_order'in atanması mümkün olur.
/// @param stack_a arama yapılan stack
/// @return value_order'i henüz belirlenmiş elemanların en büyüğü
static t_stack	*get_biggest_element(t_stack *stack_a)
{
	t_stack	*temp;
	t_stack	*start_element;
	t_stack	*biggest;

	temp = stack_a;
	start_element = NULL;
	while (start_element == NULL)
	{
		if (temp->value_order == 0)
			start_element = temp;
		temp = temp->next;
	}
	biggest = start_element;
	while (start_element != NULL)
	{
		if (start_element->value > biggest->value
			&& start_element->value_order == 0)
			biggest = start_element;
		start_element = start_element->next;
	}
	return (biggest);
}

/// @brief stack içerisinde bulunan elemanlara value_order ataması yapar.
/// value_order, value'lara göre sıralama yapılsaydı elemanın
/// hangi sırada olmasını gerektiğini gösterir.
/// Dolayısıyla value_order değeri verilirken elemanın value değerinin
/// büyüklüğü göz önünde bulundurulur.
/// En büyük değer en büyük value_order'i alır.
/// @param stack_a arama yapılan stack
/// @param stack_size arama yapılan stack'in eleman sayısı
void	set_value_order(t_stack *stack_a)
{
	t_stack	*biggest;
	int		stack_size;

	biggest = NULL;
	stack_size = get_stack_size(stack_a);
	while (stack_size > 0)
	{
		biggest = get_biggest_element(stack_a);
		biggest->value_order = stack_size;
		stack_size--;
	}
}
