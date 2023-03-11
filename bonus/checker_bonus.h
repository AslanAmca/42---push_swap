/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 01:54:22 by aaslan            #+#    #+#             */
/*   Updated: 2023/03/12 02:24:11 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

// Utilities
char	**string_split(char *s, char c);
long	string_to_integer(const char *nptr);
int		string_equal(char *s1, char *s2);
void	print_string(char *string);
void	print_error(void);
void	free_string_array(char **string_array);
void	validate_int(char **argv);

// get_next_line
int		ft_strlen(char *s);
int		ft_has_line_feed(char *line);
char	*ft_create_empty_string(int size);
char	*ft_add_buffer_to_string(char *string, char *buffer);
char	*ft_fill_string(char *string, int fd);
char	*ft_get_first_line(char *string);
char	*ft_delete_first_line(char *string);
char	*get_next_line(int fd);

// Stacks
t_stack	*create_stack(int value);
void	append_to_stack(t_stack **stack, t_stack *new_stack);
void	free_stack(t_stack *first_element);
void	fill_stack(char **argv, t_stack **stack);
t_stack	*get_last_element(t_stack *stack);
t_stack	*get_second_last_element(t_stack *stack);
void	check_duplicate_value(t_stack **stack);
int		is_sorted_stack(t_stack *stack);
int		get_stack_size(t_stack *stack);;
t_stack	*get_smallest_element(t_stack **stack);

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

#endif
