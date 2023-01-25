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
int num, num1, num2;

num2 = 0, num1 = 0;
if (argc > 1)
{
	for (num = 1; num < argc; num++)
	{
		if (_isnumber(argv[num]))
			num1 += atoi(argv[num]);
		else
			num2 = 1;
	}
}
if (num2 == 0)
	printf("%i\n", num1);
else
	printf("%s\n", "Error");
return (num2);
}
