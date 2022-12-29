#include "main.h"

/**
 * swap_int - code entry
 * @a: 1st int for swap
 * @b: 2nd int for swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
