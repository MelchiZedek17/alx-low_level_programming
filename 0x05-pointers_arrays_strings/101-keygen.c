#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */

int main(void)
{
int i;

srand(time(0));
i = rand();
printf("%i\n", i);
return (0);
}
