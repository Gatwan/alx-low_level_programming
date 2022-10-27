#include "lists.h"
/**
*int pop_listint - function that deletes the head node of a list
*
*@head: first element on the list
*
*Return: head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int new;

	if (head == NULL)
		return (0);

	new = (*head)->n;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	} 
	return (new);
}
