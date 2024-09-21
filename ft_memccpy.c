#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{

    int i = 0;
    char *p = (char *)src;
    char *d = (char *)dst;

    while (n > 0)
    {
        d[i] = p[i];

        i++;

        if (p[i] == (char)c)
            return (dst + i + 1);

        n--;
    }

    return NULL;
}