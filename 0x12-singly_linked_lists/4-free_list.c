#include "lists.h"

/**
  * free_list - free memory space
  * @head: pointer to head node
  */
void free_list(list_t *head)
{
	list_t *cup;

	while (head)
	{
		cup = head->next;
		free(head->str);
		free(head);
		head = cup;
	}
}
