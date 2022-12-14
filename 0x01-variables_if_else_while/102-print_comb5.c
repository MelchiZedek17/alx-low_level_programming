#include <stdio.h>

/**
 * main - Entry code
 *
 * Return: 0 is success
 *
 */

int main(void)
{
int one, two, three, four;

for (one = 48; one <= 57; ++one)
{
	for (two = 48; two <= 57; ++two)
	{
		for (three = 48; three <= 57; ++three)
		{
			for (four = 48; four <= 57; ++four)
			{
				if (((three + four) > (one + two) &&  three >= one) || one < three)
				{
					putchar(one);
					putchar(two);
					putchar(' ');
					putchar(three);
					putchar(four);
				if (one + two + three + four == 227 && one == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
}

putchar('\n');

return (0);
}
