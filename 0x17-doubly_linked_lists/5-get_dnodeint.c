#include "lists.h"

/**
  * get_dnodeint_at_index - Gets node at nth index
  * @head: Pointer to list
  * @index: Index of the node
  *
  * Return: node at the index on success or null
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
