NAME = libftprintf.a 
CSOURCE =	ft_strlen.c \
			ft_putnbr.c \
			ft_putunbr.c \
			ft_putstr.c \
			ft_putchar.c \
			ft_putnbr_base.c \
			ft_putpointer.c \
			ft_printf.c \
			ft_printf.c

HSOURCE = libftprintf.h

CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJECTS = $(CSOURCE:.c=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	echo 'compiling library'
	ar rcs $@ $^

.c.o:
	echo 'create OBJECTS'
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	echo 'removing ft files'
	rm -rf $(OBJECTS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re 
