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
	struct dog my_dog;

	if (my_dog.name == NULL || my_dog.age == NULL || my_dog.owner == NULL)
	{
		printf("(nil)\n");
	}

	else
		printf("Name: %s\n", my_dog.name);
		Printf ("Age: %1f\n", my_dog.age);
		printf ("owner: %s\n", my_dog.owner);
}
