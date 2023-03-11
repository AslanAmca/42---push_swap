/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 01:54:22 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/11 14:00:00 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				value_order;
	int				index;
	int				target_index;
	int				cost_a;
	int				cost_b;
	int				total_cost;
	struct s_stack	*next;
}	t_stack;

// Utilities
char	**string_split(char *s, char c);
long	string_to_integer(const char *nptr);
int		string_contain(char *s, char c);
void	print_string(char *string);
void	print_error(char *error_message);
void	free_string_array(char **string_array);
int		absolute_value(int value);
void	validate_int(char **argv);
// Stacks
t_stack	*create_stack(int value);
void	append_to_stack(t_stack **stack, t_stack *new_stack);
void	free_stack(t_stack *first_element);
void	fill_stack(char **argv, t_stack **stack);
t_stack	*get_last_element(t_stack *stack);
t_stack	*get_second_last_element(t_stack *stack);
void	check_duplicate_value(t_stack **stack);
int		is_sorted_stack(t_stack *stack);
int		get_stack_size(t_stack *stack);
void	set_value_order(t_stack *stack_a);
void	set_index(t_stack **stack);
void	set_target_index(t_stack **stack_a, t_stack **stack_b);
t_stack	*get_smallest_element(t_stack **stack);
t_stack	*get_lowest_cost_element(t_stack **stack_b);
void	calculate_and_set_cost(t_stack **stack_a, t_stack **stack_b);

// Operations
void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);
void	swap_ab(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate_a(t_stack **stack_a);
void	reverse_rotate_b(t_stack **stack_b);
void	reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	push_a(t_stack **stack_b, t_stack **stack_a);
void	push_b(t_stack **stack_a, t_stack **stack_b);

// main
void	sort(t_stack **stack_a, t_stack **stack_b);
void	triple_sort(t_stack **stack_a);
void	push_all_but_three(t_stack **a, t_stack **b, int a_size);
void	move(t_stack **stack_a, t_stack **stack_b);
void	move_small_values_up(t_stack **stack_a, int stack_size);
#endif
