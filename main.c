#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Joins the different functions to compile as one.
 * @argc: no of arguments.
 * @argv: pointer to the arguments.
 * Return: int.
 */

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		exit(EXIT_FAILURE);

	}

	interpret(argv[1]);

	return (EXIT_SUCCESS);



}
