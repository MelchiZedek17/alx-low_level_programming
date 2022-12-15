#include "main.h"

/**
 * print_last_digit - prints last digit of number
 *
 * @numb: number to use
 *
 * Return: l
 */

int print_last_digit(int numb)
{
int l, p;

l = numb % 10;
if (l < 0)
	l = -l;
p = '0' + l;
_putchar(p);
return (l);
}
