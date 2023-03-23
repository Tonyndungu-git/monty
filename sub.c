#include "monty.h"

/**
 * sub - subtracts the top element from the second top element of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode being executed
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}
