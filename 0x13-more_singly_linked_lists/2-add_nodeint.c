#include "lists.h"
#include <strings.h>
/**
*add_nodeint - function that adds a new node at the beginning of a list
*
*@head: list to add the element
*
*@n: element to be added
*
*Return: address of the new element else NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer;

	pointer = malloc(sizeof(listint_t));

	if (pointer == NULL)
	return (NULL);

	pointer->n = n;
	pointer->next = *head;

	*head = pointer;

	return (*head);
}
