#include "shell.h"

/**
 * execution - executes commands commands entered by users
 * @cp: command
 * @cmd: vector array of pointers to commands
 *
 * Return: 0
 */
void execution(char *cp, char **cmd)
{
	pid_t child;
	int status;
	char **env = environ;

	child = fork();
	if (child < 0)
		perror(cp);

	else if (child == 0)
	{
		execve(cp, cmd, env);
		perror(cp);
		free(cp);
		free_buffers(cmd);
		exit(98);
	}
	else
		wait(&status);
}
