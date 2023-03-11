/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_duplicate_stack.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 02:44:55 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/10 23:07:06 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_duplicate_value(t_stack **stack)
{
	t_stack	*current;
	t_stack	*temp;

	current = *stack;
	temp = NULL;
	while (current != NULL)
	{
		temp = current;
		while (temp->next != NULL)
		{
			if (current->value == temp->next->value)
			{
				free_stack(*stack);
				print_error("There are duplicate values.");
			}
			temp = temp->next;
		}
		current = current->next;
	}
}
