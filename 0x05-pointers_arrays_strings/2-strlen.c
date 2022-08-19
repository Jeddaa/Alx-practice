#include "main.h"

/**
 * _strlen: to check the length of a string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
    int count = 0;
    while(*s != '\0')
    {
        count ++;
        s++;
    }
    return count;
}