#include "lists.h"

/**
  * print_listint - prints all the elements of a node
  * @h: pointer to the head node
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->next == NULL)
		{
			printf("NULL\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		count++;
		h = h->next;
	}
	return (count);
}
