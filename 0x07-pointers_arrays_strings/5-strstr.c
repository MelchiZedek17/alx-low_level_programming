#include "main.h"

/**
 * _strstr - code entry
 * @haystack: string
 * @needle: string
 *
 * Return: success
 */

char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;

while (haystack[a])
{
	while (needle[b])
	{
		if (haystack[a + b] != needle[b])
			break;
		b++;
	}

	if (needle[b] == '\0')
		return (haystack + a);
	a++;
}

return ('\0');
}
