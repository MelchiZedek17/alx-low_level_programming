#include "main.h"

/**
 * rev_string - code entry
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
int num_1 = 0, num_2 = 0;
char str[500];

while (*(s + num_1))
{
	*(str + num_1) = *(s + num_1);
	num_1++;
}
num_1 -= 1;
while (num_1 >= 0)
{
	*(s + num_1) = *(str + num_2);
	num_2++;
	num_1--;
}
}
