#include "main.h"

/**
 * _strncat - entry code
 * @dest: destination
 * @src: source value
 * @n: limit
 *
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
int length = 0, a = 0;

while (dest[length])
	length++;

while (a < n && src[a])
{
	dest[length] = src[a];
	length++;
	a++;
}

dest[length + n + 1] = '\0';
return (dest);
}
