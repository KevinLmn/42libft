#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    if (c == '\0')
        return (&s[i]);
    while (--i >= 0)
    {
        if (s[i] == c)
            return (&s[i]);
    }
    return NULL;
}