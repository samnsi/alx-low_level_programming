#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list.
 * @head: Pointer to the first node in the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow && fast && fast->next)
	{
	slow = slow->next;
	fast = fast->next->next;
	count++;

	if (slow == fast)
	{
	printf("-> [%p] %d\n", (void *)slow, slow->n);
	exit(98);
	}

	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	return (count);
}
