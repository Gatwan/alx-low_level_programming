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

	new = *head;
	if (head == NULL)
	return (NULL);

	pointer = malloc(sizeof(listint_t));

	if (pointer == NULL)
	return  (NULL);

	pointer->n = n;
	pointer->next = *head;
	*head = new;

	if (new == NULL)
	{
		*head = pointer;
		return (pointer);
	}

	while (new->next != NULL)
	new = new->next;

	new->next = pointer;

	return (pointer);
}
