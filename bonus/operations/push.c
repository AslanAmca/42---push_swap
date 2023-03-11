/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:44:12 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 22:11:46 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
}
