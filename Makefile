# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 01:30:57 by aaslan            #+#    #+#              #
#    Updated: 2023/03/12 01:36:08 by aaslan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				:= push_swap
CC					:= gcc
CFLAGS				:= -Wall -Wextra -Werror

SRC_MANDOTARY		:= $(wildcard mandatory/*.c)
OTHERS_MANDOTARY	:= $(wildcard mandatory/*/*.c)
OBJS				:= $(SRC_MANDOTARY:%.c=%.o) $(OTHERS_MANDOTARY:%.c=%.o)

NAME_BONUS			:= checker
SRC_BONUS			:= $(wildcard bonus/*.c)
OTHERS_BONUS		:= $(wildcard bonus/*/*.c)
OBJS_BONUS			:= $(SRC_BONUS:%.c=%.o) $(OTHERS_BONUS:%.c=%.o)


all: mandatory bonus

mandatory: $(NAME)

bonus: $(NAME_BONUS)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME_BONUS): $(OBJS_BONUS)
	@$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

clean:
	@rm -rf $(OBJS) $(OBJS_BONUS)
	@clear

fclean: clean
	@rm -rf $(NAME) $(NAME_BONUS)
	@clear

re: fclean all

norm:
	@norminette mandatory/*.h mandatory/*.c mandatory/*/*.c bonus/*.h bonus/*.c bonus/*/*.c

.PHONY: all clean fclean re
