#include "lists.h"

/**
  * sum_dlistint - Sums up all the data in a list
  * @head: The pointer to a list
  *
  * Return: int on success or zero
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
