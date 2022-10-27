#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
/**
 * struct listint_s - type for singly linked list
 * @n: integer data in linked list
 * @next: points to the next node in the list
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;

unsigned int binary_to_uint(const char *b);
#endif
