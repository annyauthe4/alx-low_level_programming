#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - structure for poppy
 * @name: pointer to name
 * @age: float type for age
 * @owner: pointer to owner char
 *
 * Return: void
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_t - structure for dog
 * @name: pointer to a dog name
 * @age: float type for dog age
 * @owner: pointer to dog owner name
 *
 * Return: void
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
}
#endif
