#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: ptr on success
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int s2len;
	int c;
	int strlen;
	char *ptr;
/* Finds the lenght of each string */
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	s2len = j;
	strlen = (i + j);
	ptr = malloc(sizeof(char) * (strlen + 1));
/* Fills allocated memory with s1 string */
	for (c = 0; c < i; c++)
	{
		ptr[c] = s1[c];
	}
	for (j = 0; j <= s2len; j++)
	{
		ptr[c + j] = s2[j];
	}
return (ptr);
}
