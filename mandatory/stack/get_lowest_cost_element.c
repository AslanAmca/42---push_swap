/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowest_cost_element.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:49:51 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:15:28 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*get_lowest_cost_element(t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*lowest;

	temp = *stack_b;
	lowest = *stack_b;
	while (temp != NULL)
	{
		if (temp->total_cost < lowest->total_cost)
			lowest = temp;
		temp = temp->next;
	}
	return (lowest);
}
