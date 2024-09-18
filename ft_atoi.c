#include "libft.h"

int ft_atoi(const char *str)
{

    int f = 0;
    int n = 1;
    int i = 0;

    while (IS_SPACE(str[i]))
    {
        i++;
    }

    if (str[i] == '+')
    {
        i++;
    }

    if (str[i] == '-')
    {
        n = -1;
        i++;
    }

    while (ft_isdigit(str[i]))
    {

        int c = (int)str[i] - '0';

        f = (f * 10) + c;

        i++;
    }

    return f * n;
}