#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}

void *ft_memset(void *s, int c, size_t n)
{
    int i;

    i = 0;
    while(i < n)
    {
        *(int *)s = c;
        *s++;
        i++;
    }
}