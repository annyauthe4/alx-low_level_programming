#include "lists.h"

/**
  * free_listint2 - sets the head to null and free the list
  * @head: pointer to the node head
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}
	*head = NULL,
}
