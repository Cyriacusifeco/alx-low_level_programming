#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * binary_to_uint - binary to decimal
 * @b: char string
 * Return: Decimal integer on success.
 */

unsigned int binary_to_uint(const char *b);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
