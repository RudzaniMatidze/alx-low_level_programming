#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, name1, owner1;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (name1 = 0; name[name1]; name1++)
		;

	for (owner1 = 0; owner[owner1]; owner1++)
		;

	(*n_dog).name = malloc(name1 + 1);
	(*n_dog).owner = malloc(owner1 + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free((*n_dog).owner);
		free((*n_dog).name);
		free(n_dog);
		return (NULL);
	}

	for (i = 0; i < name1; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';

	(*n_dog).age = age;

	for (i = 0; i < owner1; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';

	return (n_dog);
}
