#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
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
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
