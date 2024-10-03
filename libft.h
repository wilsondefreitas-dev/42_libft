#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdlib.h>

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
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strcat(char *dst, const char *src);
char *ft_strncat(char *dst, const char *src, size_t n);
char *ft_strcpy(char *dst, const char *src);
char *ft_strncpy(char *dst, const char *src, size_t n);
char *ft_strdup(const char *string);
void *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
#endif
