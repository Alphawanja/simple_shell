#include "shell.h"

/**
 * test_path - checks whether path is valid
 * @path: tokenized path
 * @command: user enter command
 *
 * Return: path append with command on success else NULL
 */
char *test_path(char **path, char *command)
{
	int i = 0;
	char *output;

	while (path[i])
	{
		output = append_path(path[i], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		i++;
	}
	return (NULL);
}
