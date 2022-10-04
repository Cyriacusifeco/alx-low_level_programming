#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for program
 * @argc: counts the number of arguments passed
 * @argv: contains an array of strings passed
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{

		printf("%s\n", argv[i]);
		i++;
	}


return (0);
}
