#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array of poinyters
 * Return: 0 (Success).
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
