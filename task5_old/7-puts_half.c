#include "main.h"

/**
 * @brief 
 * 
 */

void puts_half(char *str)
{
    int i, length = 0;
    for (i = 0; *(str + i) != '\0'; i++)
    {
        length++;
    }
    if ((length % 2) == 0)
    {
        for (i = (length / 2); i < length; i++)
        {
            _putchar(*(str + i));
        }
    }
    else if ((length % 2) != 0)
    {
        int len = ((length - 1) / 2);
        for (i = len + 1; i < length; i++)
        {
            _putchar(*(str + i));
        }
    }
    _putchar('\0');
}