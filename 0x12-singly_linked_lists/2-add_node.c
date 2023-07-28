#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this function adds a new node at
 * the beginning of a linked list
 * @head: the double pointer to the list_t list
 * @str: the new string to add in the node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lengt = 0;

	while (str[lengt])
		lengt++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lengt = lengt;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
