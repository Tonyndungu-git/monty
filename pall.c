#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * pall - function that prints all elements.
 * @stack: struct pointer.
 * @line_number: number of the current instruction.
 * Return: Void.
 */



void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	(void) line_number;

	node = *stack;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
