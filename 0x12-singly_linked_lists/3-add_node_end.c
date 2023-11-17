#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a linked list
  * @head: pointer to a pointer to a head node
  * @str: pointer to a string
  * Return: address of new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *new_head;

	new_head = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (new_head->next)
		new_head = new_head->next;
	new_head->next = new_node;
	return (new_node);
}
