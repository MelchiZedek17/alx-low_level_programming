#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long i, maxPF;
long number = 612852475143;
double square = sqrt(number);

for (i = 1; i <= square; i++)
{
	if (number % i == 0)
	{
		maxPF = number / i;
	}
}
printf("%ld\n", maxPF);
return (0);
}
