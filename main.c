#include <stdio.h>
#include "libft.h"

int main(void)
{

    char str[50] = "Welcome to My software";

    ft_memset(str, 'K', 7);
    puts(str);
}
