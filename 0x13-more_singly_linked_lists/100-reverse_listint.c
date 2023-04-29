#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prrev = NULL;
	listint_t *neext = NULL;

	while (*head)
	{
		neext = (*head)->next;
		(*head)->next = prrev;
		prrev = *head;
		*head = neext;
	}

	*head = prrev;

	return (*head);
}
