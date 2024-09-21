#include <stdio.h>
#include "libft.h"

int main(void)
{

    const char src[50] = "points!!!";
    char dest[50] = "--------";

    printf("Before memcpy dest = %s\n", dest);
    printf("%p\n", ft_memccpy(dest, src, 'o', 49));
    printf("After memcpy dest = %s\n", dest);
    return (0);
}
