#define DOG_H
#ifndef DOG_H

#include <stdhio.h>

/**
 * struct dog - dog basic info
 * @name: hold the dogs name
 * @age: hold the dogs age
 * @owner: gives the dogs owner info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
