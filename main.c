#include "shell.h"

/**
 * main - entry point
 * @envp: points to environment variables
 * @argv: points to cl argument
 * @argc: count arguments
 * Return: 0 if success
 */
int main(int argc __attribute__ ((unused)),
		char *argv[] __attribute__ ((unused)),  char *envp[])
{
	shell(envp);
	return (0);
}
