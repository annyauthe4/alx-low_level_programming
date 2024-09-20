#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts node at certain index
  * @h: pointer to a list head pointer
  * @idx: Index to insert node
  * @n: Node data
  *
  * Return: Pointer to a new node on success or NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i;

	i = 0;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || (temp->next == NULL && i + 1 < idx))
		return (NULL);
	if (temp->next == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new;
	temp->next = new;
	return (new);
}
