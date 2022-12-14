#include <stdio.h>

/**
 * main - code entry
 *
 * Return: 0 means success
 *
 */

int main(void)
{
int num_comb;

for (num_comb = '0'; num_comb <= '9'; ++num_comb)
{
	putchar(num_comb);

	if (num_comb != '9')
	{
		putchar(',');
		putchar(' ');
	}
}

putchar('\n');

return (0);
}
