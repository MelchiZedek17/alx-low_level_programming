#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int dec_val = 0;

if (b == NULL)
	return (0);
for (b[i] != '\0')
{
	if (b[i] != '0' && b[i] != '1')
		return (0);
	dec_val <<= 1;
	if (b[i] == '1')
		dec_val ^= 1;
	i++;
}
return (dec_val);
}
