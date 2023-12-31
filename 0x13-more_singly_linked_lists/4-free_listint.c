#include "lists.h"
/**
 * free_listint - frees memory occupied by a linked list
 * @head: 'listint_t' linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
