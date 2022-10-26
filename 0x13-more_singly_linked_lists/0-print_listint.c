#include "lists.h"
/**
*print_listint - function that prints all the elements of a list
*
*@h: pointer to first element on the list
*
*Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *list = NULL;

	if (h == NULL)
	return (0);

	list = malloc(sizeof(listint_t));

	if (list == NULL)
	return (0);

	list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);

		list = list->next;
		counter++;
	}
	return (counter);
}
