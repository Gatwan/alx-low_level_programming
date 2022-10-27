#include "lists.h"
/**
*insert_nodeint_at_index - function that inserts a new node at a given position
*
*@head: first element on the list
*@idx: index of the list where the new node should be added
*@n: node
*
*Return: address of new node else NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	current = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
	}

	if (current == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
