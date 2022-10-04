#include <stdio.h>
#include <stdlib.h>
/**
 * main - Finds the sum of positive numbers
 * @argc: counts the number of arguments passed
 * @argv: contains an array of strings passed
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	for (; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

return (0);
}
