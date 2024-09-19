#include "lists.h"

/**
  * add_dnodeint_end - Adds node at the end of the list
  * @head: Pointer to the head pointer
  * @n: The data value
  *
  * Return: Pointer to a new node on success or null
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (temp == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (*head);
}
