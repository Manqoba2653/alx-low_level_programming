#include "lists.h"

/**
 * print_listint - To print the elements of a linked list
 * @h: To print linked list of type listint_t
 *
 * Return: Return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
