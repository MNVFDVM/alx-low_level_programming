#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a dog
 *
 * @d: the god to init
 * @name: the dogs name
 * @age: th dogs age
 * @owner: owners name
 *
 * Return: void
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
