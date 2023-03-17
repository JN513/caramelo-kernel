#include <stdio.h>

int strlen(char *s)
{
    char *original = s;

    while (*s != 0)
        s++;

    return (int)(s - original);
}