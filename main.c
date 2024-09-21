#include <stdio.h>
#include "libft.h"

int main(void)
{

    char str[50] = "Welcome to My software";

    ft_bzero(str, 7);
    puts(str);
}
