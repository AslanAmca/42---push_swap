/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate_value.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 02:44:55 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/12 01:46:45 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
				print_error();
			}
			temp = temp->next;
		}
		current = current->next;
	}
}
