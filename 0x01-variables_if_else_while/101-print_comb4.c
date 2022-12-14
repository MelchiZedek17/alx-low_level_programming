#include <stdio.h>

/**
 * main - entry code
 *
 * Return: 0 is success
 *
 */

int main(void)
{
int first, second, third;

for (first = '0'; first <= '9'; ++first)
{
	for (second = '0'; second <= '9'; ++second)
	{
		for (third = '0'; third <= '9'; ++third)
		{
			if (first < second && second < third)
			{
				putchar(first);
				putchar(second);
				putchar(third);

				if (first != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}

putchar('\n');

return (0);
}
