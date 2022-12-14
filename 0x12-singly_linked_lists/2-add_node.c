#include "lists.h"
#include <string.h>
/**
*add_node - function that adds a new node at the beginning of a list
*
*@head: pointer to address of the list
*@str: element to be added
*
*Return: address of new element else NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *pointer;

	if (head == NULL)
		return (NULL);

	pointer = malloc(sizeof(list_t));

	if (pointer == NULL)
		return (NULL);

	pointer->str = strdup(str);
	pointer->len = strlen(str);
	pointer->next = *head;
	*head = pointer;

	return (pointer);
}
