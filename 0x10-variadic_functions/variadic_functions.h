#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <unistd.h>
/**
 * struct format - data types
 * @c: char type
 * @i: integer type
 * @f: float type
 * @s: string type
 * Return: sum of arguments on success.
*/
struct format
{
	char c;
	int i;
	float f;
	char *s;
};


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
#endif
