#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given index
  * @head: pointer to a pointer to a node
  * @idx: the index where node is to be inserted
  * @n: node data
  * Return: address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1; && temp != NULL; i++)
			*head = (*head)->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node-> = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
