#include "main.h"

/**
 * _strcpy - code entry
 * @src: source
 * @dest: destination
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;

while (*(src + a))
{
	*(dest + a) = *(src + a);
	a++;
}
*(dest + a) = '\0';
return (dest);
}
