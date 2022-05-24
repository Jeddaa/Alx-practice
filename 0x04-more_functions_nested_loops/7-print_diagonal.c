#include "main.h"

/**
 * @brief 
 * 
 */

void print_diagonal(int n)
{
    int x = 1;
    while (x <= n)
    {
        _putchar('\\');
        _putchar('\n');
        x++;
    }
    _putchar('\n');
}
