#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * create_dnode - It creates a new node
 * @n: data of node
 * @prev: link to previous node
 * @next: link to nxt node
 * Return: ptr to new node
 */
dlistint_t *create_dnode(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	return (new);
}
/**
 * insert_dnodeint_at_index - It inserts a new node at given pos
 * @h: head of a doubly linked list
 * @idx: index insertion of a new node
 * @n: data new node
 * Return: address new node either NULL if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *localPrev = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0) /* insert at list beginning*/
	{
		if (!*h)
			*h = create_dnode(n, NULL, NULL); /*first node*/
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (curr = *h; curr && (count < idx); curr = curr->next, count++)
	{
		localPrev = curr;
	}
	if ((count == idx) && (curr == NULL)) /*insert at list end*/
	{
		localPrev->next = create_dnode(n, localPrev, NULL);
		return (localPrev->next);
	}
	if ((count < idx) && (curr == NULL))/*idx too high*/
		return (NULL);
	if (localPrev != NULL)
	{       /*insert in middle of list*/
		localPrev->next = create_dnode(n, localPrev, curr);
		curr->prev = localPrev->next;
		return (localPrev->next);
	}
	return (NULL); /*should never run*/
}