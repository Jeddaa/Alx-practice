#include "main.h"


void more_numbers(void)
{
   
    int y = 0;
    while (y <= 10)
    {
        for (int x = 0; x < 15; x++)
        {
            if (x >= 10)
                _putchar((x / 10) + 48);
            _putchar((x % 10) + 48);
        }
        _putchar('\n');
        y++;
    }
    
}