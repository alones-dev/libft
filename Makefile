C_FILES = $(wildcard *.c)
  
O_FILES = $(C_FILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME) clean

$(NAME): $(O_FILES)
    ar rcs $(NAME) $(O_FILES) 

clean:
	rm -f $(O_FILES)

fclean:
	clean rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re