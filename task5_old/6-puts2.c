#include "main.h"

/**
 * @brief 
 * 
 * 
 */

void puts2(char *str)
{
    int a, len = 0;
    for (a = 0; *(str + a) != '\0'; a++)
    {
        len++;
    }
    for (a = 0; a < len; a += 2)
    {
        _putchar(*(str + a));
    }


}