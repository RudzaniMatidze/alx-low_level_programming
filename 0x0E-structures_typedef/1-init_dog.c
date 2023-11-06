#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - dog struct whose variable is to be init.
 * @d: dog identification pointer
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}

}
