#include <stdio.h>
#include "libft.h"

int main(void)
{

    char str1[20] = "C programming";
    char str2[20];

    ft_strncpy(str2, str1, 1);

    puts(str2);
}
