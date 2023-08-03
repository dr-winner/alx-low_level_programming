#include "lists.h"

/**
 * free_listint_safe - this function frees a linked list
 * @h: pointer to first node in linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;

	int dff;

	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		dff = *h - (*h)->next;
		if (dff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
