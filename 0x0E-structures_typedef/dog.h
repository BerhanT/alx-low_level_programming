#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure tag name
 * @name: poinetr to name
 * @age: age input
 * @owner: pointer to owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
