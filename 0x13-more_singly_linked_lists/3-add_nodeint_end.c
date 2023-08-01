#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 *
 * @head: struct
 *
 * @n: const int
 *
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *plus_node = NULL, *end_node = NULL;

	plus_node = malloc(sizeof(listint_t));

	if (!plus_node)
	{
		return (NULL);
	}
	plus_node->n = n;
	if (*head == NULL)
	{
		*head = plus_node;
		plus_node->next = NULL;
		return (*head);
	}
	end_node = *head;

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = plus_node;
	plus_node->next = NULL;

	return (*head);
}

