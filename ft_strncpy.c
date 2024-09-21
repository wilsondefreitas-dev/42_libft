#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t n)
{
    int i = 0;
    while (*src != '\0' && n > 0)
    {
        dst[i] = *src;

        src++;
        i++;
        n--;
    }

    dst[i] = '\0';

    return dst;
}