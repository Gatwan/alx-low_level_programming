#include "lists.h"
/**
*free_list - function that frees a list
*
*@head: list of elements
*/
void free_list(list_t *head)
{
	struct list_t* tmp;

   while (head != NULL)
    {
       tmp = head;
       head = head->next;
       free(tmp);
    }
}
