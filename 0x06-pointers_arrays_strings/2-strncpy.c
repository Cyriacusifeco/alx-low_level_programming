#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of strings to copy
 *
 * Return: Concatenated version of the strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int a;

	while (src[j] != '\0')
	{
		j++;
	}
	a = j;

	for (j = 0; j <= a && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
