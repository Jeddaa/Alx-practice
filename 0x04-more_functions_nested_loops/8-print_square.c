#include "main.h"

/**
 * @brief 
 * 
 */

void print_square(int size)
{
    int x = 1;
    while (x <= size)
    {
        char b = '#';
        int y = 1;
        while (y <= size)
        {
            _putchar(b);
            y++;
        }
        _putchar('\n');
        x++;
    }
}
