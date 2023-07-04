#include <stdlib.h>
#include "lists.h"
/**
 * free_list - the function that frees the malloc
 * @head: the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
