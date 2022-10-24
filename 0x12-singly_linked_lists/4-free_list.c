#include "lists.h"
/**
*free_list - function that frees a list
*
*@head: list of elements
*/
void free_list(list_t *head)
{
	list_t *new;

	while ((new = head) != NULL)
	{
		head = head->next;
		free(new->str);
		free(new);
	}
}
