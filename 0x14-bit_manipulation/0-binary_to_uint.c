#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *a)
{
	int m;
	unsigned int n;

	n = 0;
	if (!a)
		return (0);
	for (m = 0; a[m] != '\0'; m++)
	{
		if (a[i] != '0' && a[m] != '1')
			return (0);
	}
	for (m = 0; a[m] != '\0'; m++)
	{
		n <<= 1;
		if (a[m] == '1')
			n += 1;
	}
	return (n);
}
