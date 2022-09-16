#include "main.h"
/**
 * mul - Entry point for program
 * @a: The character return type
 * @b: The second parameter
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

int mul(int a, int b)

{	int mul;
	mul = a * b;

	return (mul);

}
