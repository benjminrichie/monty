#include "monty.h"

/**
 * f_rotr- This func rotates the stack to the bottom
 *
 * @head: This is the head of the stack
 *
 * @line_num: line number of instruction
 *
 * Return: void
 *
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int line_num)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
