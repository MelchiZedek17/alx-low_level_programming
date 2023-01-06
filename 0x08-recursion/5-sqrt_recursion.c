#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - code entry
 * @n: number to work with
 *
 * Return: code status
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - code entry
 * @n: number to work with
 * @i: iteration number
 *
 * Return: code status
 */

int _sqrt(int n, int i)
{
int sqrt = i * i;

if (sqrt > n)
	return (-1);
if (sqrt == n)
	return (i);

return (_sqrt(n, i + 1));
}
