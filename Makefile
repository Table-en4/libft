# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 10:59:29 by molapoug          #+#    #+#              #
#    Updated: 2025/04/25 16:37:56 by molapoug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs
RM = rm -f
SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building $(NAME)"
	@$(AR) $(NAME) $(OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c libft.h
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files"
	@$(RM) $(OBJ)

fclean: clean
	@echo "Cleaning $(NAME)"
	@$(RM) $(NAME)

re: fclean all
