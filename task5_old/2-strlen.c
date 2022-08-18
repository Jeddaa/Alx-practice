#include "main.h"

/**
 * @brief 
 * 
 */

int _strlen(char *s)
{
    int length = 0;
    while (*s != 0)
    {
        length++;
        s++;
    }
    return (length);
}