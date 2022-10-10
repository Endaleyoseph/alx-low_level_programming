#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len - find length of the string
 * @s: string
 * Return: length
 */

int len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *s1;
	char *s2;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->age = age;
	if (name != NULL)
	{
		s1 = malloc(len(name) + 1);
		if (s1 == NULL)
		{
			free(d);
			return (NULL);
		}
		d->name = _strcpy(s1, name);
	}
	else
		d->name = NULL;
	if (owner != NULL)
	{
		s2 = malloc(len(owner) + 1);
		if (s2 == NULL)
		{
			free(s2);
			free(d);
			return (NULL);
		}
		d->owner = _strcpy(s2, owner);
	}
	else
		d->owner = NULL;

	return (d);
}
