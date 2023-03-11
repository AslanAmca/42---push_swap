/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:17:28 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/07 22:58:23 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack *first_element)
{
	t_stack	*current;
	t_stack	*next;

	current = first_element;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
