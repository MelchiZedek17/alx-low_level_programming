#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * @numb: numbers
 *
 * Return: void
 */

void print_to_98(int numb)
{
while (numb != 98)
{
	printf("%i, ", numb);
	if (numb > 98)
		--numb;
	else
		++numb;
}
printf("98\n");
}
