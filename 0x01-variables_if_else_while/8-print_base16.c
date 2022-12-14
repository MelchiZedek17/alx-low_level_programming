#include <stdio.h>

/**
 * main - Code entry
 *
 * Return: 0 means success
 */

int main(void)
{
char hexdigit;

for (hexdigit = '0'; hexdigit <= '9'; ++hexdigit)
{
	putchar(hexdigit);
}

for (hexdigit = 'a'; hexdigit <= 'f'; ++hexdigit)
{
	putchar(hexdigit);
}

putchar('\n');

return (0);
}
