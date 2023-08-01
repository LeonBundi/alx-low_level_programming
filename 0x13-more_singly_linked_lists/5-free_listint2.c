#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: Head of node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *plus_node1 = NULL, *plus_node2 = NULL;

	if (!head)
	{
		return;
	}
	plus_node1 = *head;

	while (plus_node1 != NULL)
	{
		plus_node2 = plus_node1;
		plus_node1 = plus_node1->next;
		free(plus_node2);
	}
	*head = NULL;
}
