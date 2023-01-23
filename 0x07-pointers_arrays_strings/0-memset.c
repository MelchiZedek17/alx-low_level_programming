#include "main.h"

/**
 * _memset - code entry
 * @s: empty memory area
 * @b: constant byte
 * @n: bytes of memory area
 *
 * Return: success
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
	s[a] = b;
return (s);
}
