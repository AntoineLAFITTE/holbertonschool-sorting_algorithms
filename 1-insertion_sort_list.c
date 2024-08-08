#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm.
 * @list: Pointer to a pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	/* *curent: curent node, *next: next node, *key: node to insert */
	listint_t *current, *next, *key;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current)
	{
		key = current;
		next = current->next;

		while (key->prev && key->prev->n > key->n)
		{
			/* Swaping the nodes */
			if (key->prev->prev)
			key->prev->prev->next = key;
			else
				*list = key;

			if (key->next)
				key->next->prev = key->prev;

			key->prev->next = key->next;
			key->next = key->prev;
			key->prev = key->prev->prev;
			key->next->prev = key;

			print_list(*list);
		}

		current = next;
	}
}

