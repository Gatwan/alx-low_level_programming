#include "lists.h"
#include <string.h>
/**
*add_node_end - function that adds a new node at the end of a list
*
*@head: list to add the element
*@str: element to add
*
*Return: address of the new element else NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pointer, *newnode;

	newnode = *head;
	if (head == NULL)
		return (NULL);

	pointer = malloc(sizeof(list_t));

	if (pointer == NULL)
		return (NULL);

	pointer->str = strdup(str);
	pointer->len = strlen(str);
	pointer->next = NULL;

	if (newnode == NULL)
	{
		*head = pointer;
		return (pointer);
	}
	while (newnode->next != NULL)
		newnode = newnode->next;

	newnode->next = pointer;

	return (pointer);
}
