#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <unistd.h>
/**
 * sum_them_all - sums all arguments
 * @n: number of arguments.
 * Return: sum of arguments on success.
*/

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
