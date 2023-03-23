#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode being executed
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *last_node, *second_last_node;

	(void) line_number; /* unused parameter */

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	last_node = *stack;
	while (last_node->next != NULL)
		last_node = last_node->next;
	second_last_node = last_node->prev;

	last_node->next = *stack;
	(*stack)->prev = last_node;
	*stack = last_node;
	second_last_node->next = NULL;
	last_node->prev = NULL;
}
