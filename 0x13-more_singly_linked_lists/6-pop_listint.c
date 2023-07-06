#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret = 0;

	if (*head == NULL)
		return (ret);

	tmp = *head;
	ret = tmp->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
