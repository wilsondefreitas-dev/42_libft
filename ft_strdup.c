#include "libft.h"

char *ft_strdup(const char *string)
{
    char *p = malloc(ft_strlen(string) + 1);

    if (p == NULL)
        return NULL;

    ft_strcpy(p, string);

    return p;
}