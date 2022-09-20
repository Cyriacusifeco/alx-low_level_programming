#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * swap_int - Entry point for program
 * @a: pointer
 * @b: pointer
 * Return: 0 on success
 */
void swap_int(int *a, int *b)
{
		int ch = *a;

		*a = *b;
		*b = ch;


}
