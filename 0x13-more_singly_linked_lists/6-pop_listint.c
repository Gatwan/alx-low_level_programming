#include "lists.h"
/**
*pop_listint - function that deletes the head node of a list
*
*@head: first element on the list
*
*Return: head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int new;

	if (*head == NULL)
		return (0);

	current = *head;

	new = current->n;

	*head = current->next;

	free(current);

	return (new);
}
