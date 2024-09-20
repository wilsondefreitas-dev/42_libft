#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    while (*str1 == *str2 && *str1 != '\0' && --n > 0)
    {
        str1++;
        str2++;
    }

    return (*str1 - *str2);
}