#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *src1;
    unsigned char *src2;

    src1 = (unsigned char *)s1;
    src2 = (unsigned char *)s2;
    while (n > 0)
    {
        if (*src1 != *src2)
        {
            return (*src1 - *src2);
        }

        src1++;
        src2++;
        n--;
    }

    return (0);
}