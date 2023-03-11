/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:25:37 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/12 02:25:01 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	handle_error(char *line, t_stack **a, t_stack **b)
{
	free(line);
	free_stack(*a);
	free_stack(*b);
	print_error();
}

static void	handle_line(char *line, t_stack **stack_a, t_stack **stack_b)
{
	if (string_equal(line, "sa\n"))
		swap_a(stack_a);
	else if (string_equal(line, "sb\n"))
		swap_b(stack_b);
	else if (string_equal(line, "ss\n"))
		swap_ab(stack_a, stack_b);
	else if (string_equal(line, "ra\n"))
		rotate_a(stack_a);
	else if (string_equal(line, "rb\n"))
		rotate_b(stack_b);
	else if (string_equal(line, "rr\n"))
		rotate_ab(stack_a, stack_b);
	else if (string_equal(line, "rra\n"))
		reverse_rotate_a(stack_a);
	else if (string_equal(line, "rrb\n"))
		reverse_rotate_b(stack_b);
	else if (string_equal(line, "rrr\n"))
		reverse_rotate_ab(stack_a, stack_b);
	else if (string_equal(line, "pa\n"))
		push_a(stack_b, stack_a);
	else if (string_equal(line, "pb\n"))
		push_b(stack_a, stack_b);
	else
		handle_error(line, stack_a, stack_b);
}

static void	init_stack(char **argv, t_stack **stack_a)
{
	validate_int(argv);
	fill_stack(argv, stack_a);
	check_duplicate_value(stack_a);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;

	stack_a = NULL;
	stack_b = NULL;
	line = NULL;
	if (argc < 2)
		return (1);
	init_stack(argv, &stack_a);
	line = get_next_line(0);
	while (line != NULL)
	{
		handle_line(line, &stack_a, &stack_b);
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted_stack(stack_a) && stack_b == NULL)
		print_string("OK\n");
	else
		print_string("KO\n");
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
