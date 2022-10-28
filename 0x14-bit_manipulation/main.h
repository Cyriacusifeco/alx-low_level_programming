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
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int _putchar(char c);
#endif
