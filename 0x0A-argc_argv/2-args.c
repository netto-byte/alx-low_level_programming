#include <stdio.h>

/**
 * main - prints all arguments it receives
 * Followed by a new line
 * @argc: Number of arguments
 * @argv: Array of pointers
 * Return: 0 (Success).
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
