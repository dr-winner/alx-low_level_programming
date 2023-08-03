#include "lists.h"

/**
 * get_nodeint_at_index - this is the function that returns the
 * node at a certain index in a linked list
 * @head: the first node in the linked list
 * @index: the index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;

	listint_t *temp = head;

	while (temp && r < index)
	{
		temp = temp->next;
		r++;
	}
	return (temp ? temp : NULL);
}
