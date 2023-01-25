#include <stdio.h>
#include <stdlib.h>

/**
 * main - code entry
 * @argc: parameter counter
 * @argv: array pointer
 *
 * Return: code status
 */

int main(int argc, char **argv)
{
int num1, num2;

num2 = 0;
if (argc != 3)
{
	printf("%s\n", "Error");
	num2 = 1;
}
else
{
	num1 = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", num1);
}

return (num2);
}
