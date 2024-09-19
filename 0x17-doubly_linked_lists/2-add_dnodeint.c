#include "lists.h"

/**
  * add_dnodeint - Adds node at the beginning of a list
  * @head: Pointer to the head pointer
  * @n: The data in the node
  *
  * Return: Pointer to the new node on success or null
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (*head);
}
