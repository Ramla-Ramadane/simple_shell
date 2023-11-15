#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <sys/stat.h>

#define SUCCESS 0
#define FAILURE 1
#define BUFFERSIZE 20
void print_environment(char *envp[]);
char **tokenize(const char *str, const char *delim);
void execute_input(char **input);
void free_memory(char **input);

#endif /* SHELL_H */
