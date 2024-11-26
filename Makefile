# Compiler and Flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Directories
INCLUDE_DIR = libft

# Source and Object Files
SRC = print_c.c print_d.c print_hex.c print_p.c print_s.c print_u.c print_x.c print_X.c printf.c
OBJ = $(SRC:.c=.o)

# Output Library
NAME = libftprintf.a

# Rules
all: $(NAME)

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
