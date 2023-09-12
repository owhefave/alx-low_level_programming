#include <stdio.h>
#include "dog.h"
/*
 * init_dog - initializes a variable of type struct dog
 * @d: name of variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: This function initializes the members of the structure with the
 * provided name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* If 'd' is NULL, allocate memory for a new struct dog */
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
