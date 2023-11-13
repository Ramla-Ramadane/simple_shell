#include "shell.h"

/**
 * tokenize - function that tokenizes strings
 * @str: points to the string to be tokenized
 * Return: pointer to tokenized strings
 */
char **tokenize(const char *str)
{
	char *token;
	char **hold_array;
	int i = 0;

	hold_array = malloc(BUFFER_SIZE * sizeof(char *));
	token = strtok((char *)str, " ");
	if (hold_array == NULL)
	{
		perror("Failed to allocate memory");
		exit(FAILURE);
	}
	for (; token != NULL; i++)
	{
		hold_array[i] = token;
		token = strtok(NULL, " ");
	}
	hold_array[i] = NULL;
	return (hold_array)
}
