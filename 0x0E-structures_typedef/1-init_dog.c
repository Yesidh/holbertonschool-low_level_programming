#include "dog.h"

/**
 * init_dog - check the code for Holberton School students.
 *@d: pointer to dog structure
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 * Return: three datas about a dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
