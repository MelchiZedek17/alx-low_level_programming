#include <stdio.h>

/**
 * main - code entry
 *
 * Return: 0 is success
 */

int main(void)
{
char alpha_value;

for (alpha_value = 'a'; alpha_value <= 'z'; ++alpha_value)
{
	putchar(alpha_value);
}
for (alpha_value = 'A'; alpha_value <= 'Z'; ++alpha_value)
{
	putchar(alpha_value);
}

putchar('\n');

return (0);
}
