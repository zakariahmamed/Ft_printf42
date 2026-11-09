
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_ischarset.c ft_printf.c ft_put_adp.c ft_putchar.c ft_put_hexa.c ft_putnbr.c ft_put_pointer.c ft_putstr.c ft_put_ugd.c ft_set_format.c
OBJS = $(SRCS:.c=.o)
all: $(NAME)
$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean
	$(MAKE) all
.PHONY: all clean fclean re
