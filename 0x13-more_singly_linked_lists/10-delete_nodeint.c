#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node at certain index in a linked list
  * @head: pointer to a pointer to the head of a list
  * @index: index of the node to be deleted
  * Return: 1 if success, -1 if failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head);
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next
	}
	prev = temp->next;
	temp->next = prev->next;
	free(prev);
	return (1);
}
