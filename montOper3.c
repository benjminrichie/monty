#include "monty.h"

/**
 * f_pall - This func will print the stack
 *
 * @head: Represents the head of stack
 *
 * @counter: no used
 *
 * Return: void
 *
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

/**
 * f_swap - This funs will add the top two elements of the stack.
 *
 * @head: This is the head of the stack
 *
 * @counter: This is the line_number
 *
 * Return: Nothing
 *
 */

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
