#include "main.h"

/**
 * _abs - prints absolute value
 *
 * @numb: number to check
 *
 * Return: numb
 */

int _abs(int numb)
{
if (numb >= 0)
	return (numb);
else
{
	numb *= -1;
	return (numb);
}
}
