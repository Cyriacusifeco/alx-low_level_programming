#ifndef LISTS_H
#define LISTS_H
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


size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
