#include <stdio.h>

/**
 * main - entry of code
 *
 * Return: 0 means success
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; ++num)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
