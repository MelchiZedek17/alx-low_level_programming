#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int result;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
	result = exclusive >> i;
	if (result & 1)
		count++;
}
return (count);
}
