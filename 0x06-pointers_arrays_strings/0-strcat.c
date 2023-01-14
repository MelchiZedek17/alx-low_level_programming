#include "main.h"
#include <stdio.h>

/**
 * _strcat - entry code
 * @dest: destination string
 * @src: souce string
 *
 * Return: code value
 */

char *_strcat(char *dest, char *src)
{
int length = 0, a;
while (dest[length])
	length++;

for (a = 0; src[a] != 0; a++)
{
	dest[length] = src[a];
	length++;
}

dest[length] = '\0';
return (dest);
}
