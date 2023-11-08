# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 14:07:32 by kdaumont          #+#    #+#              #
#    Updated: 2023/11/08 14:49:12 by kdaumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_FILES = #all files
  
C_FILES_BONUS = #all bonus files

OBJS_FILES = $(C_FILES: .c=.0)
OBJS_FILES_BONUS = $(C_FILES_BONUS: .c=.0)

CC = cc
FLAGS = -Wall -Werror -Wextra

$(NAME):
	$(CC) $(FLAGS) -c $(C_FILES)
	ar rcs $(NAME) $(OBJS_FILES)

all: $(NAME)

bonus: $(OBJS_FILES) $(OBJS_FILES_BONUS)
		ar rcs $(NAME) $(OBJS_FILES) $(OBJS_FILES_BONUS)

clean:
		rm -rf $(OBJS_FILES) $(OBJS_FILES_BONUS)

fclean: clean
		rm -rf $(NAME)

re:
	fclean all