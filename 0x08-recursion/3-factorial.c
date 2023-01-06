#include "main.h"

/**
 * factorial - code entry
 * @n: factorial number
 *
 * Return: code status
 */

int factorial(int n)
{
if (n < 0)
	return (-1);

if (n <= 1)
	return (1);

return (n * factorial(n - 1));
}
