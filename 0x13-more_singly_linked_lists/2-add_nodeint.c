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
	listint_t *pointer, *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode = n;
	newnode->next = NULL;

	pointer = malloc(sizeof(listint_t));
	pointer = n;
	pointer->next = NULL;
	newnode->next = pointer;

	while (pointer != NULL)
	{
		printf("%d", pointer->n);
		pointer = pointer->next;
	}
	return (pointer);
}
