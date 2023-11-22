#include "lists.h"

/**
  * pop_listint - deletes head node of a linked list
  * @head: pointer to head node
  * Return: list data
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
