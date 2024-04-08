#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t src_size;
    int i;

    i = 0;
    src_size = ft_strlen(src);
    if (size - 1 <= src_size)
    {
        while (i < size-1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    else
    {
        while(src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return src_size;
}