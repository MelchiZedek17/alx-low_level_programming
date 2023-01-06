#include "main.h"

/**
 * _print_rev_recursion - entry code
 * @s: reversed string
 *
 * Return: code status
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
	return;

s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
