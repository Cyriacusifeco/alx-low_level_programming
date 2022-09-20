#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/* more headers goes there */

/**
 * print_rev - Entry point for program
 * @s: Initialized variable to 98
 * Return: 0 on success
 */
void print_rev(char *s)
{

	int l = strlen(s);

	while (l--)
	{

	_putchar(*(s + l));
	}
	_putchar(10);
}
