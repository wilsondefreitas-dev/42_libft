
#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i = 0;
    while (i++ <= n)
    {

        if (*(unsigned char *)str == c)
        {
            return (void *)str;
        }

        str++;
    }

    return NULL;
}