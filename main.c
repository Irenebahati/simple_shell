#include "main.h"

/**
 * main - entry point
 * @ac: argument count
 * @argv: argument vector
 * Return: 0 on success and 1 if otherwise
 */

int main(int ac, char **argv)
{
	char *lineptr;
	size_t n = 0;

	getline(&lineptr, &n, stdin);

	free(lineptr);
	return (0);

}

/**
 * write_prompt - Display a prompt on the terminal
 * @prompt: the prompt message to display
 * Return: The number of bytes written or -1 on error
 */

ssize_t write_prompt(const char *prompt)
{
	ssize_t result = write(STDOUT_FILENO, prompt, strlen(prompt));

	if (result == -1)
	{
		perror("write_prompt");
	}
	return (result);

}
