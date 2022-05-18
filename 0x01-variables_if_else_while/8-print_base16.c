#include <stdio.h>

/**
 *main - print all numbers of base 16 in lowercase
 *followed by a new line
 *
 *Return: always 0
 */

int main(void)
{
int num;
char abc;
for (num = 48; num < 58; num++)
{
putchar(num);
}
for (abc = 'a'; abc < 'g'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}
