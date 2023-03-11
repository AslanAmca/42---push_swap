/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:18:59 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/09 06:24:48 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*create_stack(int value)
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (new_stack == NULL)
		return (NULL);
	new_stack->value = value;
	new_stack->value_order = 0;
	new_stack->index = -1;
	new_stack->target_index = -1;
	new_stack->cost_a = -1;
	new_stack->cost_b = -1;
	new_stack->next = NULL;
	return (new_stack);
}
