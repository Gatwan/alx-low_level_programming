#include "lists.h"
/**
*find_listint_loop - function that finds the loop in a linked list
*
*@head: first element of the list
*
*Return: address of the node where the loop starts else NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list;
	listint_t *prev;

	p2 = head;
	prev = head;
	while (head && list && list->next)
	{
		head = head->next;
		list = list->next->next;

		if (head == list)
		{
			head = prev;
			prev =  list;
			while (1)
			{
				list = prev;
				while (list->next != head && list->next != prev)
				{
					list = list->next;
				}
				if (list->next == head)
					break;

				head = head->next;
			}
			return (list->next);
		}
	}

	return (NULL);
}
