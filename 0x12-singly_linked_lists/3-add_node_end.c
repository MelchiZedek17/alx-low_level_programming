#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
size_t newChar;

new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);

new->str = strdup(str);
for (newChar = 0; str[newChar]; newChar++)
	;

new->len = newChar;
new->next = NULL;
tmp = *head;

if (tmp == NULL)
	*head = new;
else
{
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

return (*head);
}
