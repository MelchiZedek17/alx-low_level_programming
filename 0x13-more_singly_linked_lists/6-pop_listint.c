#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 * Return: 0 if empty list or element data
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int count;

if (head == NULL || *head == NULL)
	return (0);
count = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (count);
}
