#include "main.h"

/**
 * _strcmp - code entry
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: value
 */

int _strcmp(char *s1, char *s2)
{
int a = 0, b = 0, c = 0, r = 0, limit;

while (s1[a])
	a++;
while (s2[b])
	b++;
if (a <= b)
	limit = a;
else
	limit = b;

while (c <= limit)
{
	if (s1[c] == s2[c])
	{
		c++;
		continue;
	}
	else
	{
		r = s1[c] - s2[c];
		break;
	}

	c++;
}

return (r);
}
