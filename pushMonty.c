#include "monty.h"

/**
 * f_push - This fun will add node to the stack
 *
 * @head: Represents the stack's head
 *
 * @counter: The line_number
 *
 * Return: void
 *
 */

void f_push(stack_t **head, unsigned int counter)
{
	int w, y = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] > 57 || bus.arg[y] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	w = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, w);
	else
		addqueue(head, w);
}

