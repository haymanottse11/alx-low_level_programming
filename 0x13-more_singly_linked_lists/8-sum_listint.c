#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Calculates the sum of all the data in the list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
