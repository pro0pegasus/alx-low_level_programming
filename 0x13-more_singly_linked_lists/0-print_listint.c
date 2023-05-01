#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * @By Yassine Borak
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current_node = h;
	size_t num = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		num++;
		current_node = current_node->next;
	}

	return (num);
}
