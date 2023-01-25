#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - code entry
 * @s: string
 *
 * Return: code status
 */

int _isnumber(char *s)
{
int num, find, digit;
num = 0, find = 1, digit = 0;

if (*s == '-')
	num++;
for (; *(s + num) != 0; num++)
{
	digit = isdigit(*(s + num));
	if (digit == 0)
	{
		find = 0;
		break;
	}
}
return (find);
}

/**
 * main - code entry
 * @argc: parameter counter
 * @argv: array pointer
 *
 * Return: code status
 */

int main(int argc, char **argv)
{
int num1, num2, bucks, cents, digit;
int count[5] = {25, 10, 5, 2, 1};

num1 = 0, num2 = 1, bucks = 0;
if (argc == 2)
{
	if (_isnumber(argv[1]))
	{
		num2 = 0, cents = atoi(argv[1]);
		if (cents >= 0)
		{
			while (cents != 0)
			{
				digit = cents / count[num1];
				if (digit == 0)
					num1++;
				else
				{
					bucks += digit;
					cents -= (digit * count[num1]);
				}
			}
		}
	}
}
if (num2 == 0)
	printf("%i\n", bucks);
else
	printf("%s\n", "Error");
return (num2);
}
