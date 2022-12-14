#include <stdio.h>

/**
 * main - code entry
 *
 * Return: 0 means success
 */

int main(void)
{
char num_char;

for (num_char = '0'; num_char <= '9'; ++num_char)
{
	putchar(num_char);
}

putchar('\n');

return (0);
}
