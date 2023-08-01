#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the beginning of a linked list
 * @head: Pointer to the first node in the linked list
 * @n: The data to be inserted in the new node
 *
 * Return: a pointer to the new node, or NULL if the operation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
