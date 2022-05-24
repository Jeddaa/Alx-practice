#include <stdio.h>
#include "main.h"


int main(void)
{
    int y = 0;
    while (y <= 10)
    {
        int x;
        for (x = 0; x < 15; x++)
        {
            if (x >= 10)
                _putchar((x / 10) + 48);
            _putchar((x % 10) + 48);
        }
    }
}