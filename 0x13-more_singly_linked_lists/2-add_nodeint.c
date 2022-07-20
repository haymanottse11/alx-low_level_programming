#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: new node data
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
