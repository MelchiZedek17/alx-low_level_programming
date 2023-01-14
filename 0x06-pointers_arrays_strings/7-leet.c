#include "main.h"

/**
 * leet - code entry
 * @s: string characters
 *
 * Return: result
 */

char *leet(char *s)
{
int a = 0, b = 0, c = 5;
char range[5] = {'A', 'E', 'O', 'T', 'L'};
char num[5] = {'4', '3', '0', '7', '1'};

while (s[a])
{
	b = 0;

	while (b < c)
	{
		if (s[a] == range[b] || s[a] - 32 == range[b])
		{
			s[a] = num[b];
		}

		b++;
	}

	a++;
}
return (s);
}
