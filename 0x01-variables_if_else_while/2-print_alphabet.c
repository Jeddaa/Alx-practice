#include <stdio.h>

/**
 * main - Entry point
 * Description - print the alphabets in lowercase,
 * folowed by a new line
 * Return: always 0
 */

int main(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}
