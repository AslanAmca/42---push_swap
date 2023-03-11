/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:44:12 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:17:49 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (*src == NULL)
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}

void	push_a(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	print_string("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	print_string("pb\n");
}
