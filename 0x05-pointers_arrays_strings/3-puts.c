#include "main.h"
/**
 * _puts - code entry
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
int num = 0;

while (*(str + num))
{
	_putchar(*(str + num));
	num++;
}

_putchar('\n');
}
