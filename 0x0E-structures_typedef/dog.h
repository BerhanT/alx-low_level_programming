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

/**
 * dot_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /*DOG_H*/
