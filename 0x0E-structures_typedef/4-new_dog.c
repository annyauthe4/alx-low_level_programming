#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * dog_t *new_dog - structure of dog
 * @name: pointer to name of dog
 * @age: o ma n tan human banj
 * @owner: Pointer to dog owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *arr;
	unsigned int i, j, k;

	if (name == NULL || owner == NULL)
		return (NULL);
	arr = malloc(sizeof(dog_t));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	arr->name = malloc((i + 1) * sizeof(char));
	if (arr->name == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (k = 0; k < (i + 1); k++)
		arr->name[k] = name[k];
	arr->age = age;
	j = 0;
	while (owner[j] != '\0')
	{
		j++;
	}
	arr->owner = malloc((j + 1) * sizeof(char));
	if (arr->owner == NULL)
	{
		free(arr->owner);
		free(arr);
		return (NULL);
	}
	for (k = 0; k < (j + 1); k++)
		arr->owner[k] = owner[k];
	return (arr);
}
