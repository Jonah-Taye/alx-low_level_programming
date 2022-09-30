#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: number of arguments passed
 * @argv: array of arrays passed in the command line
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
