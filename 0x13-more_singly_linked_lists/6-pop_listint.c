#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: head pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int y;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	y = start->y;
	free(start);
	return (y);
}
