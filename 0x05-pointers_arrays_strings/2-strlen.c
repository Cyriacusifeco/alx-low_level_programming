#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strlen - Entry point for program
 * @s: Initialized variable to 98
 * Return: 0 on success
 */
int _strlen(char *s)
{


	int i = 0;

	while (*(s + i) != '\0')
	{

		i++;
	}


return (i);
}
