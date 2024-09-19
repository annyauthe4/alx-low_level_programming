#include "lists.h"

/**
  * print_dlistint - Prints all the elements of a list
  * @h: Pointer to the head of the list
  *
  * Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
