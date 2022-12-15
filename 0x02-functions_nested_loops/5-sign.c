#include "main.h"
/**
 * print_sign - print number sign
 *
 * @numb: number to check
 *
 * Return: -1, 0 or 1
 */

int print_sign(int numb)
{
if (numb > 0)
{
	_putchar(43);
	return (1);
}
else if (numb == 0)
{
	_putchar(48);
	return (0);
}
else
{
	_putchar(45);
	return (-1);
}
}
