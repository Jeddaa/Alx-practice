#include "main.h"

/**
 * @brief 
 * 
 * 
 */

void print_triangle(int size)
{
    if (size > 0)
    {
        for (int a = 0; a < size; a++)
        {
            for (int b = 0; b < size; b++)
            {
                if ((size - a - 1) > b)
                {
                    _putchar(' ');
                }
                else
                {
                    _putchar('#');
                }
            }
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}