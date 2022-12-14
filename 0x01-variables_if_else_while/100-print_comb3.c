#include <stdio.h>

/**
 * main - code entry
 *
 * Return: 0 is success
 */

int main(void)
{
int first_num, second_num;

for (first_num = '0'; first_num <= '9'; ++first_num)
{
	for (second_num = '0'; second_num <= '9'; ++second_num)
	{
		if (first_num < second_num)
		{
			putchar(first_num);
			putchar(second_num);

			if (first_num != '8' || (first_num == '8' && second_num != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}

putchar('\n');

return (0);
}
