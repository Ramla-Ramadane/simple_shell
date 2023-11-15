#include "shell.h"

/**
 * main - function that emulates the shell program
 * @envp: points to environment variables
 * @argc: count arguments
 * @argv: points to cl argument
 * Return: 0 if success
 */
int main(int argc __attribute__ ((unused)),
	       char *argv[] __attribute__ ((unused)), char *envp[])
{
	char *my_prompt = "techgirls$ ", *lineptr = NULL;
	size_t size = 0;
	char **livre;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(1, my_prompt, strlen(my_prompt));
		}
		if (getline(&lineptr, &size, stdin) == -1)
		{
			write(1, "\n", 1);
			break;
		}
		lineptr[strlen(lineptr) - 1] = '\0';
		if (strcmp(lineptr, "env") == 0)
		{
			print_environment(envp);
			continue;
		}
		if (strcmp(lineptr, "exit") == 0)
		{
			write(1, "\n", 1);
			break;
		}
		livre = tokenize(lineptr, " \n \t");
		execute_input(livre);
		free_memory(livre);
	}
	free(lineptr);
	return (0);
}
