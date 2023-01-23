#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - code entry
 * @a: matrix
 * @size: size
 *
 * Return: success
 */

void print_diagsums(int *a, int size)
{
int b, sumOne = 0, sumTwo = 0;
for (b = 0; b < size; b++)
{
	sumOne += a[(size + 1) * b];
	sumTwo += a[(size - 1) * (b + 1)];
}

printf("%d, %d\n", sumOne, sumTwo);
}
