#include "main.h"

/**
 * _strpbrk - code entry
 * @s: string
 * @accept: characters
 *
 * Return: success
 */

char *_strpbrk(char *s, char *accept)
{
int a = 0, bytes;

while (s[a])
{
	bytes = 0;
	while (accept[bytes])
	{
		if (s[a] == accept[bytes])
		{
			s += a;
			return (s);
		}
		bytes++;
	}
	a++;
}

return ('\0');
}
