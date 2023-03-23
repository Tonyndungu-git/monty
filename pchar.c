#include "monty.h"



/**
 * pchar - prints the char at the top of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode being executed
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int ascii_code;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	ascii_code = (*stack)->n;
	if (ascii_code < 0 || ascii_code > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(ascii_code);
	putchar('\n');
}
