#include "monty.h"

/**
 * mod - modulus of the second top element of the stack by the top element.
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode being executed
 */




void mod(stack_t **stack, unsigned int line_number)
{
	int mod_result;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	mod_result = ((*stack)->next->n) % ((*stack)->n);
	temp = (*stack)->next;
	temp->n = mod_result;
	pop(stack, line_number);
}
