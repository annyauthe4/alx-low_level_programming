#include "lists.h"

/**
  * reverse_listint - reverses linked list
  * @head: pointer to a pointer to a list head
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next; /* Save the next node */
		(*head)->next = prev; /* Reverse the link */
		prev = *head; /* Move prev to the current node */
		*head = next; /* Move current to the next node */
	}
	*head = prev; /* Update the head to point to the new first node */
	return (*head);
}
