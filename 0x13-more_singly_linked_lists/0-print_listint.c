#include <stdio.h>
#include "lists.h"
/**
 * print_listint - the linked list function pointer
 * @h: the pointer to the head of the linked list
 *
 * Return: returns the number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);

		counter++;
		h = h->next;
	}
	return (counter);
}
