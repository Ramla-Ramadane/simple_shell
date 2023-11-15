#include "shell.h"

/**
 * tokenize - function that tokenizes strings
 * @str: points to the string to be tokenized
 * @delim: delimiter
 * Return: pointer to tokenized strings
 */
char **tokenize(const char *str, const char *delim)
{
	char *token;
	char **hold_array;
	int i = 0;

	hold_array = malloc(BUFFERSIZE * sizeof(char *));
	if (hold_array == NULL)
	{
		perror("Failed to allocate memory");
		return (NULL);
	}
	token = strtok((char *)str, delim);
	for (; token != NULL; i++)
	{
		hold_array[i] = strdup(token);
		token = strtok(NULL, delim);
	}
	hold_array[i] = NULL;
	return (hold_array);
}
