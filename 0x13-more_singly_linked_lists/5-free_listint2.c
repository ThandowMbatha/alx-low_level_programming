#include "lists.h"

/**
 * free_listint2 - frees memory occupied by a linked list
 * @head: pointer to the 'listint_t' linked list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}

	*head = NULL;
}
