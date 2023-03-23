#include "monty.h"

/**
 * mul - multiplies the second top element of the stack by the top element.
 * @stack: double pointer to the beggining of the stack.
 * @line_number: line no of the opcode being executed.
 */

void mul(stack_t **stack, unsigned int line_number)
{

	if (*stack == NULL || (*stack)->next == NULL)
	{

		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;
	pop(stack, line_number);
}
