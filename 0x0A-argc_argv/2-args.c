#include <stdio.h>
#include <stdlib.h>

/**
 * main - code entry
 * @argc: parameters counter
 * @argv: arrays pointer
 *
 * Return: code status
 */

int main(int argc, char **argv)
{
int number;

if (argc > 0)
{
	for (number = 0; number < argc; number++)
		printf("%s\n", argv[number]);
}

return (0);
}
