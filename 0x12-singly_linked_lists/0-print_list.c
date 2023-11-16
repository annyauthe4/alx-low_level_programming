#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  *print_list - prints elements of a linked list
  * @h: pointer to a structured linked list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
