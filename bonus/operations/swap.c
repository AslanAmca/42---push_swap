/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:37:46 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 23:23:41 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	swap(t_stack *stack)
{
	int	temp;

	if (stack == NULL || stack->next == NULL)
		return ;
	temp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp;
}

void	swap_a(t_stack **stack_a)
{
	swap(*stack_a);
}

void	swap_b(t_stack **stack_b)
{
	swap(*stack_b);
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
}
