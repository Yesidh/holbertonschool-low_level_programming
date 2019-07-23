#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the memory of function dog
 *@d: pointer to dog structure
 *
 *
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->age);
		free(d->name);
	}
}
