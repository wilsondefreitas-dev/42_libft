#include "libft.h"

char *ft_strcat(char *dst, const char *src)
{
    int s = ft_strlen(dst);
    int i = 0;

    while (*src != '\0')
    {
        dst[s + i] = *src;

        src++;
        i++;
    }

    dst[s + i] = '\0';

    return dst;
}