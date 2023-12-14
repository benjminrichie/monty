#include "monty.h"

/**
 * free_stack - This func will free a doubly linked list
 *
 * @head: Represents the head of the stack
 *
 */

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
