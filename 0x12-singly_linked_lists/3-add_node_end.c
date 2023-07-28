#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a linked list
 * @head: the double pointer to the list_t list
 * @str: the string to put in the new node
 *
 * Return: address of the new element, or NULL if otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int lengt = 0;

	while (str[lengt])
		lengt++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lengt = lengt;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
