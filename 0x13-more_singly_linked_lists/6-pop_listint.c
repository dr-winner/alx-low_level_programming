#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a linked list
 * @head: the pointer to first element in the linked list
 * Return: data inside elements that was deleted,
 * else 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int de_num;

	if (!head || !*head)
		return (0);

	de_num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (de_num);
}
