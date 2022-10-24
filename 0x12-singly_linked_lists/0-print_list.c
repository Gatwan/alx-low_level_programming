#include "lists.h"
/**
*print_list - function that prints all the elements of a
*
*@h: pointer to first element on the list
*
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *list = NULL;

	if (h == NULL)
		return (0);

	list = malloc(sizeof(list_t));

	if (list == NULL)
		return (0);

	list = h;

	while (list != NULL)
	{
		if (list->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", list->len, list->str);

		list = list->next;
		counter++;
	}
	return (counter);
}
