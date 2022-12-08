#include "lists.h"
/**
*add_dnodeint - add node at the beginning of a list
*
*@head: pointer to the first element on the list
*
*@n: element to be added
*
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	if (new->next != NULL)
		new->next->prev = new;

	return (new);
}
