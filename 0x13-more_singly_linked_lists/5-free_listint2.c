#include "lists.h"
/**
*free_listint2 - function that frees a list
*
*@head: first element on the list
*
*Return: no return
*/
void free_listint2(listint_t **head)
{
	listint_t *list;
	listint_t *current;

	if (*head != NULL)
	{
		current = *head;

		while ((list = current) != NULL)
		{
			current = current->next;
			free(list);
		}
		*head = NULL;
	}
}
