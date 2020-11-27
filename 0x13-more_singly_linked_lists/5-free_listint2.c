#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current = (*head)->next;
	listint_t *next;

	head = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

}
