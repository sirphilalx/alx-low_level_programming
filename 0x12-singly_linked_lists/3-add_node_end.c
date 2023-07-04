#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds new node to the end of the linked list
 * @head: the head of the linked list
 * @str: the string to be duplicated
 *
 * Return: returns the address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate_str;


	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate_str = strdup(str);
	if (duplicate_str == NULL)
	{
		free(new_node);
			return (NULL);
	}

	new_node->str = duplicate_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
