#ifndef MY_HEADER_H

#define MY_HEADER_H



#include <stdio.h>

#include <stdlib.h>

/**
 *struct dog - define dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owners name
 */



typedef struct dog

{

	char *name;

	float age;

	char *owner;

}

dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);



#endif
