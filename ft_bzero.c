#include <string.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = (unsigned char *)s;
    while (n--)
    {
        ptr[i] = 0;
        i++;
    }
}