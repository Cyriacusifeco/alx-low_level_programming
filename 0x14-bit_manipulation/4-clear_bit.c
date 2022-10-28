#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * clear_bit - clear bit
 * @n: Decimal number
 * @index: Index of the bit to print
 * Return: binary
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int ptr = 0;

		if (*n < index)
			ptr = index + 1;
return (ptr);
}
