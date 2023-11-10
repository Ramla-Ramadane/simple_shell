#include "shell.h"

/**
 * print_environment - prints variable environment
 * @envp: points to variables environment
 * Return: void
 */
void print_environment(char *envp[])
{
	int i;

	for (i = 0; envp[i] != NULL; i++)
	{
		write(STDOUT_FILENO, envp[i], strlen(envp[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
}
