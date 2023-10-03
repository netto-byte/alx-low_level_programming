#include <stdio.h>

/**
 * main - Prints it name, followed by a new line.
 * @argc: Number of arguments
 * @argv: Array of pointers.
 * Return: 0 (Success).
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
