#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    int     i;
    size_t  sizejoin;

    sizejoin = ft_strlen(s1) + ft_strlen(s2) + 1;
    join = (char *)malloc(sizejoin);
    if (join)
    {
        i = 0;
        while(s1[i] != '\0')
        {
            join[i] = s1[i];
            i++;
        }
        sizejoin = ft_strlcat(join, s2, sizejoin);
    }
    else
        return(NULL);
    return(join);
}