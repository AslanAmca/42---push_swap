/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:37:46 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/09 06:20:20 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_stack *stack)
{
	int	temp;

	if (stack == NULL || stack->next == NULL)
		return ;
	temp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp;
	temp = stack->value_order;
	stack->value_order = stack->next->value_order;
	stack->next->value_order = temp;
}

void	swap_a(t_stack **stack_a)
{
	swap(*stack_a);
	print_string("sa\n");
}

void	swap_b(t_stack **stack_b)
{
	swap(*stack_b);
	print_string("sb\n");
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	print_string("ss\n");
}
