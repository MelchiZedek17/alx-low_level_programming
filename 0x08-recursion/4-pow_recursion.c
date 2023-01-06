#include "main.h"

/**
 * _pow_recursion - code entry
 * @x: multiply by
 * @y: opearand
 *
 * Return: code status
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);

if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));
}
