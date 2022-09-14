#include "main.h"
/**
 * add - Entry point for program
 * @a: The character return type
 * @b: The second parameter
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

int add(int a, int b)

{	int sum;
	sum = a + b;

	return (sum);

}
