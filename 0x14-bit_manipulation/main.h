#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * binary_to_uint - binary to decimal
 * @b: char string
 * Return: Decimal integer on success.
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
#endif
