#include "lists.h"

/**
 * add_nodeint - Adds a node at beginning
 *
 * @head: struct
 *
 * @n: const int
 *
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *plus_node;

	plus_node = malloc(sizeof(listint_t));

	if (!plus_node)
	{
		return (NULL);
	}
	plus_node->n = n;
	plus_node->next = *head;
	*head = plus_node;
	return (*head);
}
