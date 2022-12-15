#include "main.h"

/**
 * _islower - checks for lowercase alphabets
 *
 * @alpha: lowercase alphabets
 *
 * Return: 0 or 1
 */
int _islower(int alpha)
{
if (alpha >= 'a' && alpha <= 'z')
	return (1);
else
	return (0);
}
