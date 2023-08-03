#include "lists.h"

/**
 * sum_listint - this function calculates the sum of
 * all the data in a listint_t list
 * @head: the first node in linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int summation = 0;
	listint_t *temp = head;

	while (temp)
	{
		summation += temp->n;
		temp = temp->next;
	}

	return (summation);
}
