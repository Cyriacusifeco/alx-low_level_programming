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

	i = (i % 10);

	*argv = argv[0];

	if (argc > 1)
	{
		if (argc - 1 == 0)
		{
			printf("%d\n", i);
		}

	printf("%d\n", argc - 1);

	}


return (0);
}
