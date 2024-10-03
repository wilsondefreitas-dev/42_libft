#include "libft.h"

void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
    size_t i;

    if (ft_strlen(src_str) < ft_strlen(dest_str))
    {
        i = numBytes;
        while (i > 0)
        {
            i--;
            ((char unsigned *)dest_str)[i] = ((char unsigned *)src_str)[i];
        }
    }
    else
    {
        i = 0;
        while (i < numBytes)
        {
            ((char unsigned *)dest_str)[i] = ((char unsigned *)src_str)[i];
            i++;
        }
    }

    return dest_str;
}