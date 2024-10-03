#include <stdio.h>
#include "libft.h"

int main(void)
{

    char dest_str[] = "123456789";
    const char src_str[] = "abcdefghijklmnopqrstuv";
    printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
    ft_memmove(dest_str, src_str, 5);
    printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
    return (0);
}
