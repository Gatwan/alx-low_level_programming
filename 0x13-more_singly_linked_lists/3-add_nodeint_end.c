#include "lists.h"
#include <strings.h>
/**
*add_nodeint_end - function that adds a new node at the end of a list
*
*@head: pointer to element of the list
*
i*@n: element to be added
*
*Return: address of new element else NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pointer, *new;

	if (head == NULL)
	return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	pointer = *head;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (pointer->next)
	pointer = pointer->next;

	pointer->next = new;

	return (new);
}
