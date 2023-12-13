#include "main.h"
/**
 * _getline_command - print line
 * Return:  string input
 */

char *_getline_command(void)
{
	char *ptr = NULL;
	size_t charter_user = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	if (getline(&ptr, &charter_user, stdin) == -1)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
