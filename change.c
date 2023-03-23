#include "monty.h"

/**
 * set_stack - Sets the format of the data to a stack (LIFO).
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the instruction.
 */
void set_stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	vars.order = 1;
}

/**
 * queue - Sets the format of the data to a queue (FIFO).
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the instruction.
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	vars.order = 0;
}
