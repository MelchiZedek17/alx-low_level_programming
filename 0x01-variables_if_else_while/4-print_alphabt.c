#include <stdio.h>
/**
 * main - code entry
 *
 * Return: 0 means success
 */

int main(void)
{
char some_alpha;

for (some_alpha = 'a'; some_alpha <= 'z'; ++some_alpha)
{
	if (some_alpha != 'e' && some_alpha != 'q')
	{
		putchar(some_alpha);
	}
}
putchar('\n');

return (0);
}
