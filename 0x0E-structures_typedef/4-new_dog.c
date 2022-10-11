#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - a function that prints a struct dog
 * @name: structure member
 * @age: member
 * @owner: member
 *
 * Return: ptr on success.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;



	return (ptr);
}
