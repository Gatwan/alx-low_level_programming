#include "lists.h"
/**
*get_nodeint_at_index - function that returns the nth node of a linked list
*
*@head: first element on the list
*
*@index: index of the node
*
*Return: index of the node else NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
