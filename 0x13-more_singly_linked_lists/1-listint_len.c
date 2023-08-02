#include "lists.h"

/**
 * listint_len - this functions returns ithe number of elements in linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
 size_t myNum = 0;

 while (h)
 {
 myNum++;
 h = h->next;
 }

 return (myNum);
}
