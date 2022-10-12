#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - to group data type of dogs.
 * @name: member of structure
 * @age: age of dog
 * @owner: owner of dog also member of structure
 */

typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
