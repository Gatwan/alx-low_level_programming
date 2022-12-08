#include "lists.h"
/**
*add_dnodeint_end - add node at the end
*
*@head: point to the last element on the list
*
*@n: element to be added
*
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

		temp->next = new;
		new->prev = temp;
		new->next = NULL;

		return (new);
}
