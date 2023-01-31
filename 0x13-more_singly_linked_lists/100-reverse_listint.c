#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 * the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (curr)
	{
	*head = curr->next;
	curr->next = prev;
	prev = curr;
	curr = *head;
	}
	*head = prev;
	return (*head);
}
