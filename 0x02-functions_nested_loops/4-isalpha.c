#include "main.h"

/**
 * _isalpha - checks for alphabet letters
 *
 * @alpha: alphabet checked
 *
 * Return: 0 or 1
 */

int _isalpha(int alpha)
{
if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
	return (1);
else
	return (0);
}
