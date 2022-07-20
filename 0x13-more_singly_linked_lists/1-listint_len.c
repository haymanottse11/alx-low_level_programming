#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - a function that returns the number of elements.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: lengt of the list.
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
