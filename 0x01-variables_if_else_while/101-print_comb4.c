#include <stdio.h>

/**
 *main - prints all posssible combination of three
 *digits number and they must be different
 *Return: always 0
 */

int main(void)
{
int i = 48;
int j, k;
while (i < 58)
{
j = 48;
while (j < 58)
{
k = 48;
while (k < 58)
{
if (i != j && j != k && i < j && j < k)
{
putchar(i);
putchar(j);
putchar(k);
if (i == 55 && j == 56 && k == 57)
break;
putchar(',');
putchar(' ');
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
