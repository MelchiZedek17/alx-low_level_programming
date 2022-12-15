#include "main.h"
/**
 * print_times_table - Prints n times table from 0
 * @numb: number being used
 *
 * Return: number table
 */

void print_times_table(int numb)
{
int a, b, c;
if (numb >= 0 && numb <= 14)
{
	for (a = 0; a <= numb; ++a)
	{
		for (b = 0; b <= numb; ++b)
		{
			c = a * b;
			if (c > 99)
			{
				_putchar(',');
				_putchar(32);
				_putchar((c / 100) + '0');
				_putchar(((c / 10) % 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c > 9)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(((c / 10) % 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
}
