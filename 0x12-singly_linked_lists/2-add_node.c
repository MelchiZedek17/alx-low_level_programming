#include "lists.h"

/**
 * add_node - code entry
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
size_t newChar;

new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);

new->str = strdup(str);
for (newChar = 0; str[newChar]; newChar++)
	;

new->len = newChar;
new->next = *head;
*head = new;

return (*head);
}
