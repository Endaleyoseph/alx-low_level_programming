#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - contains dog's information
 * @name: first element
 * @age: second element
 * @owner: thrid element
 *
 * Description: the structure contains the
 * dog's name, age, and owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
