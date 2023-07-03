#include <stdio.h>
#include "lists.h"
/**
 * print_list - the function that prints the string in the linked list
 * @h: the pointer to the head of the linked list
 *
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		counter++;
		h = h->next;
	}

	return (counter);
}
