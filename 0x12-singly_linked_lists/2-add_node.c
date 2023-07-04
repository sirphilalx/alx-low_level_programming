#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - the function that adds a node at the beginning of a linked list
 * @head: teh head of the linked list
 * @str: the elements to be duplicated from a previous node
 *
 * Return: returns the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate_str;

	if (str == NULL)
		return (NULL);

	new_node  = malloc(sizeof(list_t));

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
