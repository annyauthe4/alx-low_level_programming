#include "lists.h"

/**
  * print_listint_safe - prints a linked list
  * @head: pointer to list head
  * Return: number of nodes;
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count;

	slow = head;
	fast = head;
	count = 0;
	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", slow, slow->n);
		count++;

		slow = slow->next; /* Move one step at a time */

		fast = fast->next->next; /* Move 2 steps at a time */

		if (slow == fast)
		{
			printf("-> [%p] %d\n", slow, slow->n);
			printf("Linked list is a loop\n");
			exit(98);
		}
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}
