#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    b;
    long  a;

    a = (long) n;
    if (a < 0)
    {
        write (fd, "-", 1);
        a = -a;
    }
    if (a < 10)
    {
        b = a + 48;
        ft_putchar_fd(b, fd);
    }
    else
    {
        ft_putnbr_fd(a / 10, fd);
        ft_putnbr_fd(a % 10, fd);
    }
}
