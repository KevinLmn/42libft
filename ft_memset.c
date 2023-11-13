#include <string.h>

void ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = (unsigned char *)b;
    while (len--)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
}