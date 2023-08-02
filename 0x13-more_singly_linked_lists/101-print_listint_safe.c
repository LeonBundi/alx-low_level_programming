#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *visited_nodes = NULL;

	while (head)
	{
		const listint_t *temp = visited_nodes;

		while (temp)
		{
			if (head == temp)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (num);
			}
			temp = temp->next;
		}

		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		visited_nodes = head;
		head = head->next;
	}

	return (num);
}

