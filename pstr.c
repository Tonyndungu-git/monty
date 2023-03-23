#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Line number being executed from script file
 *
 * Return: Nothing
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void)line_number;

	while (tmp && tmp->n > 0 && tmp->n <= 127)
	{
		putchar(tmp->n);
		tmp = tmp->next;
	}

	putchar('\n');
}
