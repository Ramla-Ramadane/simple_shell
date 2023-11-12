#include "shell.h"

/**
 * execute_input - function executes command inputed
 * @input: points to command
 * Return: void
 */
void execute_input(char **input)
{
	pid_t child_pid;

	child_pid = fork();

	if (child_pid < 0)
	{
		perror("The creation of child process was unsuccessful");
		exit(FAILURE);
	}
	if (child_pid == 0)
	{
		if (execve(input[0], input, NULL) == -1)

		{
			perror("Failed to execute");
			exit(FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}

}
