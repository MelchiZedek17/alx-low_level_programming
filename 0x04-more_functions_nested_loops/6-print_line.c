#include "main.h"

/**
 * print_line - code entry
 * @n: lines to draw
 *
 * Return: none
 */

void print_line(int n)
{
int num;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (num = 0; num < n; num++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
}
