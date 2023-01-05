#include "main.h"
#include <stdio.h>

/**
 * print_array - entry code
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
int b = 0;

while (b < n)
{
	printf("%d", a[b]);
	if (b < (n - 1))
		printf(", ");
	b++;
}
printf("\n");
}
