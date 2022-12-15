#include <stdio.h>
/**
 * main - code entry
 *
 * Return: 0 is success
 */

int main(void)
{
unsigned int a, b, c, d, seq;
a = 1;
b = 2;
c = 3;
seq = 2;
for (d = 2; d <= 32; ++d)
{
	if (c % 2 == 0)
		seq += c;
	a = b;
	b = c;
	c = a + b;
}
printf("%u\n", seq);
return (0);
}
