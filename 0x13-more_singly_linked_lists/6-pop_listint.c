#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *second;
	int data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
