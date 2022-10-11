#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: structure variable
 * @name: member
 * @age: member
 * @owner: member
 *
 * Return: ptr on success.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{



	if (d == NULL)
	{
		exit(98);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

}
