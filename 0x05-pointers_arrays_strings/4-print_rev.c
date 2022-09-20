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
	int ch = 0;
	int i;
	int l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}

	printf("%d", *s);
}
