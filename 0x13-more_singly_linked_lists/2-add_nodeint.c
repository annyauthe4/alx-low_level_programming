#include "lists.h"

/**
  * add_nodeint - adds node at the beginning of the list
  * @head: pointer to a pointer to head node
  * @n: elements in the list
  * Return: pointer to new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
