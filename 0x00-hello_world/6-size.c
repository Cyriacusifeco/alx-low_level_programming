#include <stdio.h>
/**
 * main - Entry point of program
 * Return: Always 0 on succes
 *
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int r;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(r));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

return (0);
}
