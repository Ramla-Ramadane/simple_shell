#include "shell.h"

/**
 * execute_input - function executes command inputed
 * @input: points to command
 * Return: void
 */
void execute_input(char **input)
{
	if (input[0] == NULL)
	{
		return;
	}

	switch (fork())
	{
		case -1:
			perror("The creation of child process was unsuccessful");
			break;
		case 0:
			execve(input[0], input, NULL);
			perror("Failed to execute");
			exit(FAILURE);
		default:
			wait(NULL);
	}
}
