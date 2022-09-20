#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - Entry point for program
 * @s: Initialized variable to 98
 * Return: 0 on success
 */
void rev_string(char *s)

{
	char ch = s[0];
	int i;
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		l--;
		ch = s[i];
		s[i] = s[l];
		s[l] = ch;
	}

}
