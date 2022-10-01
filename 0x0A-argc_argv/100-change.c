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
	if (argc > 1)
	printf("%d\n", argc);

	printf("%s\n", argv[0]);

return (0);
}
