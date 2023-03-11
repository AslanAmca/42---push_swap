/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:18:55 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 07:03:53 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	append_to_stack(t_stack **stack, t_stack *new_stack)
{
	t_stack	*temp;

	if (*stack == NULL)
	{
		*stack = new_stack;
		return ;
	}
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_stack;
}
