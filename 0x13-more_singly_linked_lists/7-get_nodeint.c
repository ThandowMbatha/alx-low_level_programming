#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a...
 * specified index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to be returned
 *
 * Return: pointer to the node being searched for, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
	temp = temp->next;
	i++;
	}

	return (temp ? temp : NULL);
}
