#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked list
  * @h: pointer to head node
  * Return: number of element count
  */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->n)
		{
			count++;
		}
		h = h->next;
	}
	return (count);
}
