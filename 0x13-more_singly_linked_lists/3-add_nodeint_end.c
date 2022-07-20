#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the of the list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = 0;
	last = *head;
	if (*head == NULL)
		*head = node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}
	return (*head);
}
