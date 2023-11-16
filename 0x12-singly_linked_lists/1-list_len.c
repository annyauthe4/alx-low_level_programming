#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
  * list_len - returns number of elements of a linked list
  * @h: pointer to a structured linked list
  * Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
