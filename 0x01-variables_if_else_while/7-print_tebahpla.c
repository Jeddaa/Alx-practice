#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse
 *
 *Return: always 0
 */

int main(void)
{
char abc = 'z';
while (abc >= 'a')
{
putchar(abc);
abc--;
}
putchar('\n');
return (0);
}
