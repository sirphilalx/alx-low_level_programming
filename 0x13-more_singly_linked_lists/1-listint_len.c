#include <stdio.h>
#include "lists.h"
/**
 * listint_len - lists the number of elements in the linked list
 * @h: the pointer to the header of the list link
 *
 * Return: returns the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
