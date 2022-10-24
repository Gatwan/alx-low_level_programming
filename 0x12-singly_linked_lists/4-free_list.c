#include "lists.h"
/**
*free_list - function that frees a list
*
*@head: list of elements
*/
void free_list(list_t *head)
{
	list_t *newnode;

	while (head)
	{
		newnode = head->next;
		free(head->str);
		free(head);
		head = newnode;
	}
	free(head);
}
