#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: struct name
 *
 * Return: ptr on success.
 */

void print_dog(struct dog *d)
{

	if (d->name == NULL || d->age < 0 || d->owner == NULL)

		printf("(nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %1f\n", d->age);
		printf("owner: %s\n", d->owner);
	}
}
