#include "libft.h"

char *ft_strncat(char *dst, const char *src, size_t n)
{
    int s = ft_strlen(dst);
    int i = 0;

    while (*src != '\0' && n > 0)
    {
        dst[s + i] = *src;

        src++;
        i++;
        n--;
    }

    dst[s + i] = '\0';

    return dst;
}