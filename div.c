#include "monty.h"

/**
 * divid - divides the second top element of the stack by the top elements.
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode being executed
 */
void divid(stack_t **stack, unsigned int line_number)
{

	int divisor;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	divisor = (*stack)->n;
	if (divisor == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= divisor;
	pop(stack, line_number);
}
