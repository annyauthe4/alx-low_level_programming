#include "lists.h"

/**
  * sum_listint - sums up all the data in a linked list
  * @head: pointer to head node
  * Return: sum of the node data
  */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
