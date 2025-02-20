# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 10:59:29 by molapoug          #+#    #+#              #
#    Updated: 2025/02/18 11:00:35 by molapoug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a
CC            = cc
CFLAGS        = -Wall -Wextra -Werror
SRCS        = $(shell find . -type f -name '*.c' ! -name '*_bonus.c')
BONUS_SRCS    = $(shell find . -type f -name '*_bonus.c')
OBJS        = $(SRCS:.c=.o)
BONUS_OBJS    = $(BONUS_SRCS:.c=.o)
INCLUDES    = -I.
HEADER        = libft.h

# Colors
RED         = \033[0;31m
GREEN       = \033[0;32m
YELLOW      = \033[0;33m
BLUE        = \033[0;34m
MAGENTA     = \033[0;35m
CYAN        = \033[0;36m
BOLD        = \033[1m
RESET       = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(BOLD)$(BLUE)%12s$(RESET): $(YELLOW)Building$(RESET) $(NAME)\n" $(NAME)
	@ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	@printf "$(BOLD)$(BLUE)%12s$(RESET): $(YELLOW)Including$(RESET) bonus $(NAME) files\n" $(NAME)
	@ar rcs $(NAME) $(BONUS_OBJS)

%.o: %.c $(HEADER)
	@printf "$(BOLD)$(BLUE)%12s$(RESET): $(MAGENTA)Compiling$(RESET) $<\n" $(NAME)
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	@printf "$(BOLD)$(BLUE)%12s$(RESET): $(RED)Removing$(RESET) object files\n" $(NAME)
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@printf "$(BOLD)$(BLUE)%12s$(RESET): $(RED)Removing$(RESET) executables and libraries\n" $(NAME)
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

