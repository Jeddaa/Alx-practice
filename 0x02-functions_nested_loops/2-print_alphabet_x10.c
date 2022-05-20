#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *followed by a new line
 *Return: 0
 */

void print_alphabet_x10(void)
{
int a = 0;
while (a <= 10)
{
char f = 'a';
while (f <= 'z')
{
_putchar(f);
f++;
}
_putchar('\n');
a++;
}
}
