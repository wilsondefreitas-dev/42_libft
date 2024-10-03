#include <stdio.h>
#include "libft.h"

int main(void)
{

    const char str[] = "ABCDEFG";
    const int chars[] = {'D', 'd'};
    for (size_t i = 0; i < sizeof chars / (sizeof chars[0]); ++i)
    {
        const int c = chars[i];
        const char *ps = ft_memchr(str, c, ft_strlen(str));
        ps ? printf("character '%c'(%i) found: %s\n", c, c, ps)
           : printf("character '%c'(%i) not found\n", c, c);
    }
    return 0;
}
