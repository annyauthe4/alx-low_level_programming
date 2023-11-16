#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
  * _strlen - counts string lenght
  * @s: pointer to string to be counted
  * Return: number of string
  */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * add_node - adds a new node at the beginning of a list_s
  * @head: pointer to a pointer to structured linked list
  * @str: pointer to a string
  * Return: number of nodes
  */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *array;
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	array = malloc((len + 1) * sizeof(char))
		if (array == NULL)
			return (NULL);
	for (i = 0; i < len; i++)
	{
		array[i] = str[i];
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = array;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
