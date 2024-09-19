#include "lists.h"

/**
  * dlistint_len - Returns the number of list elements
  * @h: List head pointer
  *
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
