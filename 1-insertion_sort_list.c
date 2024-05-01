#include "sort.h"

/**
 * insertion_sort_list - a function that sorts an array of intergers
 * using the insertion sort algorithm
 *
 * @list: pointer to a pointer to a double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *ptr, *head;

	head = (*list)->next;
	node = (*list)->next;
	while (head != NULL)
	{
		ptr = head->prev;
		while (ptr->prev != NULL)
		{
			if (node->n < ptr->n)
			{
				ptr->next = node->next;
				node->next->prev = ptr;
				ptr = ptr->prev;
			}
			
		}
	}
}
