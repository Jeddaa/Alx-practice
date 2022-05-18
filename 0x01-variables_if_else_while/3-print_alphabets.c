#include <stdio.h>

/**
 * main - Prints alphabets in lowercaser then
 * uppercase and followed by a new line
 * Return: always 0
 */

int main(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
for (abc = 'A'; abc <= 'Z'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}
