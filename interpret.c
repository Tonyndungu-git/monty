#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * interpret- function that interprets the various moty commands.
 * @filename: the monty file.
 * Return: Void.
 */

void interpret(char *filename)
{
	FILE *f = fopen(filename, "r");

	char *line = NULL;
	char *opcode;
	size_t line_size = 0;
	int read;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (!f)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &line_size, f)) != -1)
	{
		line_number++;
		opcode = strtok(line, " \n");

		if (!opcode)
			continue;

		if (strcmp(opcode, "push") == 0)
			push(&stack, line_number);
		else if (strcmp(opcode, "pall") == 0)
			pall(&stack, line_number);
		else if (strcmp(opcode, "pint") == 0)
			pint(&stack, line_number);
		else if (strcmp(opcode, "pop") == 0)
			pop(&stack, line_number);
		else
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
	}
	free(line);
	fclose(f);
}
