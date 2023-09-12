#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

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

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void print_dog(struct dog *d);


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
