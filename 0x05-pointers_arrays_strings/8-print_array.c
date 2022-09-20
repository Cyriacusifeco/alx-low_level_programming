#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_array - Entry point for program
 * @a: Initialized variable to 98
 * @n: number of elements of array
 * Return: 0 on success
 */
void print_array(int *a, int n)
{
		int c;


		for (c = 0; c < n; c++)
		{
			if (c != n - 1)
				printf("%d, ", a[c]);
			else
				printf("%d", a[c]);

		}
		_putchar(10);


}
