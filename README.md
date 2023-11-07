Description:

This project is a simple shell implementation written in C. It offers users a simple command-line interface via which they may run commands and carry out typical shell tasks.

Key characteristics:

1.Command Input:
Displays a prompt and waits for the user to type a command.
2.Command Execution:
Executes the command if an executable can be found.
3.Error Handling:
If an executable cannot be found, prints an error message and displays the prompt again.
Handles errors gracefully.
4.End of File Condition:
Handles the "end of file" condition.
5.Limitations:
Does not handle special characters such as ", ', `, , *, &, #.
	
Running:

Use gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c to compile and then ./hsh to run.



