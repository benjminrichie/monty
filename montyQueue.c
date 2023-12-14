#include "monty.h"

/**
 * f_queue - This func will print the top
 *
 * @head: Represents the stack's head
 *
 * @counter: The line_number
 *
 * Return: void
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - This func will add node to the tail stack
 *
 * @n: Represents the new_value
 *
 * @head: Pointer to the head of the stack
 *
 * Return: Nothing
 *
 */

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
