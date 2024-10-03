FILES = ft_strlen \
		ft_toupper \
		ft_tolower \
		ft_isalpha \
		ft_isdigit \
		ft_atoi \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_strcmp \
		ft_strncmp \
		ft_strcat \
		ft_strncat \
		ft_strcpy \
		ft_strncpy \
		ft_strdup \
		ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memchr \

CFILES = $(FILES:%=%.c)

OFILES = $(FILES:%=%.o)

NAME = libft.a

$(NAME):
	gcc -Wall -Wextra -Werror -c $(CFILES) -I./
	ar -rc $(NAME) $(OFILES)
	mv *.o output
	mv *.a output

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
