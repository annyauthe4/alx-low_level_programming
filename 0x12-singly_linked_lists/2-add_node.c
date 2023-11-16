#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
  * add_node - adds a new node at the beginning of a list_s
  * @head: pointer to a pointer to structured linked list
  * @str: pointer to a string
  * Return: number of nodes
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
