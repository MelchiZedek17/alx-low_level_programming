#include "main.h"

/**
 * _memcpy - code entry
 * @dest: dest memory location
 * @src: source memory location
 * @n: bytes from memory location
 *
 * Return: success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
	dest[a] = src[a];
return (dest);
}
