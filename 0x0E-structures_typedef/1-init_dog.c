#include "dog.h"



/**
 * init_dog - intializes struct dog
 * @d: dog
 * @name: dog name
 * @age: dog age
 * @owner: owners name
 * Return: Always 0
 */



void init_dog(struct dog *d, char *name, float age, char *owner)

{

	if (d)

	{

		d->name = name;

		d->age = age;

		d->owner = owner;

	}

}
