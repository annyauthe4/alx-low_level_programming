#ifndef _1_INIT_DOG_C_
#define _1_INIT_DOG_C_

/**
 * init_dog - initializes structure of dog
 * @d: pointer to struct dog
 * @name: pointer to name char
 * @age: float age
 * @owner: pointer to owner char
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
#endif
