#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.

*/

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

void reverse_array(int *a, int n);

char *string_toupper(char *);

int _strcmp(char *s1, char *s2);

int main(void);

char *cap_string(char *);

int _putchar(char c);
