#include "libft.h"

#include <string.h>
#include <stdio.h>
#define SIZE    21


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
    unsigned char *ptr = (unsigned char *)s;
    unsigned char v = (unsigned char) c;
    
    i = 0;
    while(i < n)
    {
        ptr[i] = v;
        i++;
    }
    return s;
}

void ft_bzero(void *s, size_t n)
{
    ft_memset(s,0, n);
}

void *ft_memcpy(void *dest, void *src, size_t n)
{
    int i;
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    i = 0;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    unsigned char *t;

    i = 0;
    while(i < n)
    {
        t[i] = s[i];
        d[i] = t[i];
        i++;
    }
    return dest;
}