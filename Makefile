# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 10:59:29 by molapoug          #+#    #+#              #
#    Updated: 2025/05/03 11:05:35 by molapoug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC = ft_calloc.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c \
	ft_atoi.c ft_tolower.c \
	ft_toupper.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_bzero.c \
	ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strncmp.c \
	ft_strlcat.c ft_strdup.c \
	ft_strlcpy.c ft_strlen.c \
	ft_strjoin.c ft_substr.c \
	ft_strtrim.c ft_strchr.c \
	ft_strnstr.c ft_strrchr.c \
	ft_itoa.c ft_split.c \
	ft_strmapi.c ft_striteri.c \

SRC_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

# Color codes
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
NC = \033[0m # No Color

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)Building$(NC) $(NAME)"
	@$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	@echo "$(CYAN)Compiling$(NC) $<"
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(OBJ_B)
	@$(AR) $(NAME) $(OBJ_B)
	@echo "$(YELLOW)Building$(NC) $(NAME) with bonus"

clean:
	@echo "$(CYAN)Cleaning object files$(NC)"
	@$(RM) $(OBJ) $(OBJ_B)

fclean: clean
	@echo "$(CYAN)Cleaning$(NC) $(NAME)"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
