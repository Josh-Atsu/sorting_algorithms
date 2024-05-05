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

	if ((*list) == NULL || list == NULL || (*list)->next == NULL)
		return;
	head = (*list);
	while (head != NULL)
	{
		node = head->next; /* always update head with this*/
		ptr = head->prev;
		while (ptr != NULL && head->n < ptr->n)
		{
			swap_nodes(&(*list), ptr, head);
			print_list(*list);
			ptr = head->prev;
		}
		head = node;
	}
}

/**
 * swap_nodes - swapes the nodes
 * @list_head: link to the original node
 * @ptr_1: link to the previous node
 * @head_1: link to the next node
 */

void swap_nodes(listint_t **list_head, listint_t *ptr_1, listint_t *head_1)
{
	listint_t *temp;

	if (ptr_1 == NULL || head_1 == NULL)
		return;

	/* if either a or b is the head node */
	if (*list_head == ptr_1)
		*list_head = head_1;
	else if (*list_head == head_1)
		*list_head = ptr_1;

	/* adjust previous pointers*/
	if (ptr_1->prev != NULL)
		ptr_1->prev->next = head_1;
	if (head_1->prev != NULL)
		head_1->prev->next = ptr_1;

	/* adjust next pointers*/
	if (ptr_1->next != NULL)
		ptr_1->next->prev = head_1;
	if (head_1->next != NULL)
		head_1->next->prev = ptr_1;

	/* swap the positions of ptr_1 and head_1 */
	temp = ptr_1->prev;
	ptr_1->prev =  head_1->prev;
	head_1->prev = temp;

	temp = ptr_1->next;
	ptr_1->next = head_1->next;
	head_1->next = temp;
}
