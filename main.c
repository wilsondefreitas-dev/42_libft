#include <stdio.h>
#include "libft.h"

int main(void)
{

    const char src[50] = "points!!!";
    char dest[50] = "testing";

    printf("Before memcpy dest = %s\n", dest);
    ft_memcpy(dest, src, 4);
    printf("After memcpy dest = %s\n", dest);
    return (0);
}
