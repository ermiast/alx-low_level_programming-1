#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current = h;

	while (current->next != NULL)
	{
		printf("%s", h->str);
		current = current->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
