#ifndef DOG_H
#define DOG_H

/**
 * struct dog - short description
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
