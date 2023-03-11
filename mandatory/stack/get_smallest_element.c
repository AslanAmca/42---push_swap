/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smallest_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:41:47 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 06:55:25 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*get_smallest_element(t_stack **stack)
{
	t_stack	*temp_a;
	t_stack	*smallest;

	temp_a = *stack;
	smallest = *stack;
	while (temp_a != NULL)
	{
		if (temp_a->value < smallest->value)
			smallest = temp_a;
		temp_a = temp_a->next;
	}
	return (smallest);
}
