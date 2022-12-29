#include "main.h"

/**
 * _strlen - code entry
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
int num = 0;

while (*(s + num))
	num++;
return (num);
}
