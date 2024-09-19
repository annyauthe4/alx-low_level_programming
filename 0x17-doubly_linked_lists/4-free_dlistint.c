#include "lists.h"

/**
  * free_dlistint - Frees dynamically allocated memories
  * @head: The list head pointer
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
