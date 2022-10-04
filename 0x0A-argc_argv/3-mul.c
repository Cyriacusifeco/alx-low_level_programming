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
	int i = 1;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}

		printf("%d\n", mul);
	}

	else if (argc == 1 || argc < 3)
	{
		printf("%s\n", "Error");

		return (1);

	}

	return (0);
}
