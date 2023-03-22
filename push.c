#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @head: Double pointer to the head of the stack.
 * @line_num: Line number of the instruction.
 */

void push(stack_t **head, unsigned int line_num)
{
	char *endptr;
	long int number;

	if (!vars.stack)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_num);
		free_vars();
		exit(EXIT_FAILURE);
	}

	number = strtol(vars.stack, &endptr, 10);
	if (*endptr != '\0')
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_num);
		free_vars();
		exit(EXIT_FAILURE);
	}

	if (vars.order == 1)
		add_dnodeint(head, (int) number);
	else
		add_dnodeint_end(head, (int) number);
}
