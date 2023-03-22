#include "monty.h"
/**
 * get_opcode_func - get the option of char input to perform the opcode
 * @s: input opcode
 * Return: a pointer to the function given the opcode or NULL if not found
 */
void (*get_opcode_func(char *s))(stack_t **head, unsigned int line_num)
{
	int i = 0;
	instruction_t stack[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add}
		{NULL, NULL}
	};

	while (stack[i].opcode)
	{
		if (strcmp(stack[i].opcode, s) == 0)
			break;
		i += 1;
	}
	return (stack[i].f);
}
