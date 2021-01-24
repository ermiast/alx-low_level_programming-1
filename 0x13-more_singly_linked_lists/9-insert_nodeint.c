#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index to insert the node
 * @n: new node data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;

	if (head == NULL)
		return (0);

	current = *head;

	idx--;
	while (idx != 0)
	{
		current = current->next;
		idx--;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = current->next;
	current->next = new;
	/*TODO: Handle special case when idx is 0 and last index*/

	return (current);
}

