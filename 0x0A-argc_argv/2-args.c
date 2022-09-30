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
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    (void)argv;

	return (0);
}
