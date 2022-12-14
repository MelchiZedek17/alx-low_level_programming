#include <stdio.h>

/**
 * main - code entry
 *
 * Return: 0 gives success
 */

int main(void)
{
	char alpha_rev;

	for (alpha_rev = 'z'; alpha_rev >= 'a'; --alpha_rev)
	{
		putchar(alpha_rev);
	}

	putchar('\n');
	return (0);
}
