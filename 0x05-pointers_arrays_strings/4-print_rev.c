#include "main.h"

/**
 * print_rev - code entry
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
int num = 0;

while (*(s + num))
	num++;
num -= 1;
while (num >= 0)
{
	_putchar(*(s + num));
	num--;
}
_putchar('\n');
}
