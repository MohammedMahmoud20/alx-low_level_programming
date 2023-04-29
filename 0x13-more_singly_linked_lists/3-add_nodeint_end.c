#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnew;
	listint_t *teemp = *head;

	nnew = malloc(sizeof(listint_t));
	if (!nnew)
		return (NULL);

	nnew->n = n;
	nnew->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (teemp->next)
		teemp = teemp->next;

	teemp->next = nnew;

	return (nnew);
}
