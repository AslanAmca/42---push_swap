/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:42:23 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 22:12:05 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first_element;

	first_element = *stack;
	*stack = (*stack)->next;
	get_last_element(*stack)->next = first_element;
	first_element->next = NULL;
}

void	rotate_a(t_stack **stack_a)
{
	rotate(stack_a);
}

void	rotate_b(t_stack **stack_b)
{
	rotate(stack_b);
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
