#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define SUCCESS 0
#define FAILURE 1

void shell(char *envp[]);
void print_environment(char *envp[]);

#endif /* SHELL_H */
