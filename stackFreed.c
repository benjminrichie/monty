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

/**
 * f_stack - This is the function that prints the top
 *
 * @head: This is the head of stack
 *
 * @counter: This is the line count
 *
 * Return: nothing
 */
