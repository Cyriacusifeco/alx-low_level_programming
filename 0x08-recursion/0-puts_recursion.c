#include "main.h"
/* more headers goes there */

/**
 * _puts_recursion - Prints string to std output
 * @s: poniter to string to print
 * Return: Pointer from memory area s
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar(10);
	}

	else
	{
		_putchar(s[i]);

		_puts_recursion(s + 1);

	}


}
