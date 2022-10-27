#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts to decimal
 * @b: Binary string
 * Return: decimal value
 */

unsigned int binary_to_uint(const char *b)
{
		unsigned int res = 0;
		int len, i;
		int base = 1;

		if (b == NULL)
			return (0);

		len = strlen(b);

		for (i = len - 1; i >= 0; i--)
		{
			if (b[i] != '1' && b[i] != '0')
				return (0);

			if (b[i] == '1')
			res += base;

			base *= 2;
		}

return (res);
}
