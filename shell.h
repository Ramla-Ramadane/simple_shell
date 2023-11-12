#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define SUCCESS 0
#define FAILURE 1
#define BUFFER_SIZE 1024

void shell(char *envp[]);
void print_environment(char *envp[]);
char **tokenize(const char *str);
void execute_input(char **input);


#endif /* SHELL_H */
