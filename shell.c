#include "shell.h"

/**
 * shell - function that emulates the shell program
 * Return: nothing
 */
void shell(void)
{
	int shell_mode;
	ssize_t full_line;
	int leave;
	char *my_prompt = "techgirls$ ";
	char *lineptr = NULL;
	size_t size = 0;

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
		lineptr[strlen(lineptr) - 1] = '\0';
		write(1, lineptr, strlen(lineptr));
		write(1, "\n", 1);
		leave = strcmp(lineptr, "exit");
		if (leave == 0)
		{
			write(1, "Disconnected...", strlen("Disconnected..."));
			write(1, "\n", 1);
			break;
		}
	}
	free(lineptr);
}
