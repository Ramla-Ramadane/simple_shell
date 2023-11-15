#include "shell.h"

/**
 * free_memory - functions that frees allocated memory
 * @input: points to strings
 * Return: void
 */
void free_memory(char **input)
{
	int i;

	for (i = 0; input[i]; i++)
		free(input[i]);
	free(input);
}
