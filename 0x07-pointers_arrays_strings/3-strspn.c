#include "main.h"

/**
 * _strspn - code entry
 * @s: string
 * @accept: input string
 *
 * Return: success
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, bytes, times = 0;
while (accept[a])
{
	bytes = 0;
	while (s[bytes] != 32)
	{
		if (accept[a] == s[bytes])
			times++;
		bytes++;
	}
	a++;
}

return (times);
}
