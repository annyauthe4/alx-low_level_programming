#include "lists.h"

/**
  * free_listint - frees list memory
  * @head: pointer to node head
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
