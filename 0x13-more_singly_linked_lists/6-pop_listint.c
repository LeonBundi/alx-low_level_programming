#include "lists.h"
/**
 * pop_listint - Remove node from top
 *
 * @head: pointer to head node
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int index = 0;
	listint_t *plus_node = *head;

	if (plus_node)
	{
		index = plus_node->n;
		*head = plus_node->next;
	}
		free(plus_node);
		return (index);
}

