#include "lists.h"
/**
*delete_nodeint_at_index - function that deletes the node at
*index of a listint_t linked list
*
*@head: first element of the list
*@index: index of the node that should be deleted
*
*Return: 1 (success) else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *next;
	unsigned int i;

	new = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && new != NULL; i++)
		{
			new = new->next;
		}
	}

	if (new == NULL || (new->next == NULL && index != 0))
	{
		return (-1);
	}

	next = new->next;

	if (index != 0)
	{
		new->next = next->next;
		free(next);
	}
	else
	{
		free(new);
		*head = next;
	}
	return (1);
}
