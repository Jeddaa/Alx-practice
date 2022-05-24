#include "main.h"

/**
 * print_numbers - prints the numbers from
 * 0 to 9 followed by a new line
 * Return - 0
 */

void print_numbers(void)
{
    int x = 48;
    while (x < 58)
    {
        _putchar(x);
        x++;
    }
    _putchar('\n');
}