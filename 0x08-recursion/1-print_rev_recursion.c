#include "main.h"
/* more headers goes there */

/**
 * _print_rev_recursion - Prints reverse of string
 * @s: poniter to string to print
 * Return: Pointer from memory area s
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}


}
