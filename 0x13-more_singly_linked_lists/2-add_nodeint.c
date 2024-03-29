#include "lists.h"

/**
 * add_nodeint - add node at beginning of a listint_t list.
 * @head: head of double pointer
 * @n: int add the list
 *
 * Return: NULL if it failed or pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
