/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:18:59 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 23:31:16 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

t_stack	*create_stack(int value)
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (new_stack == NULL)
		return (NULL);
	new_stack->value = value;
	new_stack->next = NULL;
	return (new_stack);
}
