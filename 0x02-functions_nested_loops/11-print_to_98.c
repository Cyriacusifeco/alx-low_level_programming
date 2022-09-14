#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point for program
 * @n: The character parameter
 * 
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

void print_to_98(int n)			

{	while ((n >= 98) && (n <! 98))
	{ printf("%d, ", n);
		n--;
	}

	while ((n <= 98) && (n >! 98))
	{ printf("%d, ", n);
		n++;
	
	}
	"\n";

}
