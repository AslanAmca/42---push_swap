/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:46:25 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:17:19 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*second_last;

	first = *stack;
	last = get_last_element(*stack);
	second_last = get_second_last_element(*stack);
	*stack = last;
	(*stack)->next = first;
	second_last->next = NULL;
}

void	reverse_rotate_a(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	print_string("rra\n");
}

void	reverse_rotate_b(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	print_string("rrb\n");
}

void	reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	print_string("rrr\n");
}
