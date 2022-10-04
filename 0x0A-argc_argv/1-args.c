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


	*argv = argv[0];

	{

		printf("%d\n", argc - 1);

	}


return (0);
}
