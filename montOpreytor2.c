#include "monty.h"

/**
 * f_pop - This func prints the top
 *
 * @head: Represents the stack's head
 *
 * @counter: The line_number
 *
 * Return: void
 *
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

/**
 * f_pint - This func will print the top
 *
 * @head: Represents the stack head
 *
 * @counter: The line_number
 *
 * Return: void
 *
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
 * f_nop- This func will do nothing
 *
 * @head: Represents the head of stack
 *
 * @counter: Represents the line_numbe
 *
 * Return: void
 *
 */

void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
