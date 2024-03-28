#include "libft.h"

int ft_isalpha(int c)
{
    int b = 0;
    if (c >= 65 && c <= 90)
        b = 1;
    else if(c >= 97 && c <= 122)
        b = 2;
    return (b);
}

int ft_isdigit(int c)
{
    int b = 0;
    if (c >= 48 && c <= 57)
        b = 1;
    return (b);
}

int ft_isalnum(int c)
{
    int b = 0;
    if (c >= 48 && c <= 57)
        b = 4;
    if (c >= 65 && c <= 90)
        b = 1;
    else if(c >= 97 && c <= 122)
        b = 2;
    return (b);
}

int ft_isascii(int c)
{
    int b = 0;
    if (c >= 0 && c <= 127)
        b = 1;
    return (b);
}

int ft_isprint(int c)
{
    int b = 0;
    if (c == 32)
        b = 64;
    else if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64)
    || (c >= 91 && c <= 96) || (c >= 123 && c <= 126))
        b = 16;
    else if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)) 
        b = 1;
    else if (c >= 97 && c <= 122)
        b = 2;
    return (b);
}