#include <stdio.h>

/**
 * main - code entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
		putchar(alpha);

	putchar('\n');

	return (0);
}
