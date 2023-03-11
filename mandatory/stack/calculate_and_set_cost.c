/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_and_set_cost.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:54:32 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:16:32 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	calculate_and_set_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	int		size_a;
	int		size_b;

	temp_a = *stack_a;
	temp_b = *stack_b;
	size_a = get_stack_size(temp_a);
	size_b = get_stack_size(temp_b);
	while (temp_b != NULL)
	{
		if (temp_b->index <= size_b / 2)
			temp_b->cost_b = temp_b->index;
		else
			temp_b->cost_b = (size_b - temp_b->index) * -1;
		if (temp_b->target_index <= size_a / 2)
			temp_b->cost_a = temp_b->target_index;
		else
			temp_b->cost_a = (size_a - temp_b->target_index) * -1;
		temp_b->total_cost = absolute_value(temp_b->cost_a)
			+ absolute_value(temp_b->cost_b);
		temp_b = temp_b->next;
	}
}
