#include "lists.h"
/**
*listint_len - function that returns the number of elements in a linked list
*
*@h: pointer to the first element on the list
*
*Return: number of elements in a linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *list;

	if (h == NULL)
	return (0);

	list = malloc(sizeof(listint_t));

	if (list == NULL)
	return (0);

	list = h;

	while (list != NULL)
	{
		list = list->next;
		elements++;
	}
	return (elements);
}
