#include "lists.h"

/**
  * free_listint2 - sets the head to null and free the list
  * @head: pointer to the node head
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
