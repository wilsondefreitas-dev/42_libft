#ifndef LIBFT_H
#define LIBFT_H

// it's a macro because it's simple and was not necessary as a function in 42 exercise
#ifndef IS_SPACE
#define IS_SPACE(x) ((x == 32) || (x >= 9 && x <= 13))
#endif

int ft_strlen(const char *str);
int ft_toupper(int ch);
int ft_tolower(int ch);
int ft_isalpha(int ch);
int ft_isdigit(int ch);
int ft_atoi(const char *str);
int ft_isalnum(int ch);
int ft_isascii(int ch);
int ft_isprint(int ch);
int ft_strcmp(const char *str1, const char *str2);
#endif
