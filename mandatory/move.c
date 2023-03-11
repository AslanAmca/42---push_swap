/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:59:00 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:24:43 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_ab(t_stack **stack_a, t_stack **stack_b, t_stack *lowest)
{
	if (lowest->cost_a < 0 && lowest->cost_b < 0)
	{
		while (lowest->cost_a < 0 && lowest->cost_b < 0)
		{
			reverse_rotate_ab(stack_a, stack_b);
			lowest->cost_a++;
			lowest->cost_b++;
		}
	}
	else if (lowest->cost_a > 0 && lowest->cost_b > 0)
	{
		while (lowest->cost_a > 0 && lowest->cost_b > 0)
		{
			rotate_ab(stack_a, stack_b);
			lowest->cost_a--;
			lowest->cost_b--;
		}
	}
}

static void	move_a(t_stack **stack_a, t_stack *lowest)
{
	while (lowest->cost_a != 0)
	{
		if (lowest->cost_a > 0)
		{
			rotate_a(stack_a);
			lowest->cost_a--;
		}
		else if (lowest->cost_a < 0)
		{
			reverse_rotate_a(stack_a);
			lowest->cost_a++;
		}
	}
}

static void	move_b(t_stack **stack_b, t_stack *lowest)
{
	while (lowest->cost_b != 0)
	{
		if (lowest->cost_b > 0)
		{
			rotate_b(stack_b);
			lowest->cost_b--;
		}
		else if (lowest->cost_b < 0)
		{
			reverse_rotate_b(stack_b);
			lowest->cost_b++;
		}
	}
}

void	move(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*lowest;

	lowest = get_lowest_cost_element(stack_b);
	move_ab(stack_a, stack_b, lowest);
	move_a(stack_a, lowest);
	move_b(stack_b, lowest);
	push_a(stack_b, stack_a);
}
