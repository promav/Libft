#include "libft.h"

void    ft_put(char c, int fd)
{
    write(fd, &c, 1);
}
