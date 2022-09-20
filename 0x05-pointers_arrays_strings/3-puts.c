#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _puts - Entry point for program
 * @str: string input to be print
 * Return: 0 on success
 */
void _puts(char *str)
{
	int c = 0;
	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}

	_putchar(10);


}
