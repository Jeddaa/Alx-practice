#include <stdio.h>

/**
 * main - print all letters except e and q
 *
 * Return: Always 0
 */

int main(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
if (abc == 'e')
{
continue;
}
else if (abc == 'q')
continue;
putchar(abc);
}
putchar('\n');
return (0);
}
