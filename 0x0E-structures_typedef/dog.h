#ifndef gerente
#define gerente
/**
 * struct dog - basic way to create a structure
 * @name: firs member, name of the dog
 * @age: Second member, age of the dog
 * @owner: Third member, owner of the dog
 *
 * Description: how to create a basic structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog dog_t;
#endif
