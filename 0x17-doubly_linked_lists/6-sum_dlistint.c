#include "lists.h"

/**
 * sum_dlistint - elements sum in the list
 * @head: list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
