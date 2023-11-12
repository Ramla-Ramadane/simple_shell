#include "shell.h"

/**
 * shell - function that emulates the shell program
 * @envp: points to environment variables
 * Return: nothing
 */
void shell(char *envp[])
{
	int shell_mode;
	ssize_t full_line;
	char *my_prompt = "techgirls$ ";
	char *lineptr = NULL;
	size_t size = 0;
	char **livre;

	shell_mode = isatty(STDIN_FILENO);

	while (1)
	{
		if (shell_mode)
		{
			write(1, my_prompt, strlen(my_prompt));
		}
		full_line = getline(&lineptr, &size, stdin);
		if (full_line == -1)
		{
			break;
		}
		livre = tokenize(lineptr);
		lineptr[strlen(lineptr) - 1] = '\0';
		if (strcmp(lineptr, "env") == 0)
		{
			print_environment(envp);
			continue;
		}
		if (strcmp(lineptr, "exit") == 0)
		{
			write(1, "Disconnected...", strlen("Disconnected..."));
			write(1, "\n", 1);
			break;
		}
		execute_input(livre);
		free(livre);
	}
	free(lineptr);
}
