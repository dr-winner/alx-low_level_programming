#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check.
 * Return: when the list is not looped - 0.
 * else, the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nods = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nods++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nods++;
				tortoise = tortoise->next;
			}
			return (nods);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - this fuction is printing a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{

	size_t nods, id = 0;

	nods = looped_listint_len(head);

	if (nods == 0)
	{
		for (; head != NULL; nods++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (id = 0; id < nods; id++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nods);
}
