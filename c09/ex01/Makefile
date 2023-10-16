OBJ = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iincludes

.PHONY: all ft.o clean fclean re

all : libft.a

libft.a : $(OBJ)
	ar rcs libft.a $(OBJ)
%.o: %.c
	gcc $(CFLAGS) $(INCLUDES) -c $< -o $@

clean :
	rm -r srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
fclean : clean
	rm libft.a
re : fclean all
