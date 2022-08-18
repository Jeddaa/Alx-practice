#include "main.h"

/**
 * swap_int - to swap two integers
 * @a: integer one to be swapped
 * @b: integer two to be swapped
 * 
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}