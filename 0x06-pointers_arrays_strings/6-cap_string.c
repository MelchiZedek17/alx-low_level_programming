#include "main.h"
#include <stdio.h>

/**
 * cap_string - code entry
 * @s: capitalized string
 *
 * Return: result
 */

char *cap_string(char *s)
{
int a = 0, i;
int capLett = 13;
char lett[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

while (s[a])
{
	i = 0;

	while (i < capLett)
	{
		if ((a == 0 || s[a - 1] == lett[i]) && (s[a] >= 97 && s[a] <= 122))
			s[a] -= 32;
		i++;
	}

	a++;
}

return (s);
}
