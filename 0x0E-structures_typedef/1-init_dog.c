#include "dog.h"

/**
 * init_dog - function struct
 * @d: struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == Null)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
