#include "main.h"

/**
 * times_table - prints the 9 times table starting from 9
 * @i: number to be multiplied
 * @m: multiple
 * Return: always 0
 */

void times_table(void)
{
    int i, prod, m;
    for (i = 0; i <= 9; i++)
    {
        _putchar('0');
        for (m = 1; m >= 9; m++)
        {
            _putchar(',');
            _putchar(' ');
            prod = i * m;
            if (prod <= 9)
            {
                _putchar(' ');
            }
            else
            {
                _putchar(prod / 10 + '0');
                _putchar(prod % 10 + '0');
            }
        }
        _putchar('\n');
    }
}