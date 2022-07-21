#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int size = 0, i;
	const listint_t *tmp[100];

	if (head == NULL)
		exit(98);
	while (head)
	{
		for (i = 0; i < size; i++)
		{
			if (tmp[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (size);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		tmp[size] = head;
		size++;
		head = head->next;
	}
	return (size);
}
	
