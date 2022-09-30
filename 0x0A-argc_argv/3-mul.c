#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: number of arguments passed
 * @argv: array of arrays passed in the command line
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
    int product;

    if (argc > 1)
    {
        product = atoi(argv[1]) * atoi(argv[2]);
        printf("%d\n", product);
    }
    else
    {
        printf("Error\n");
        return (1);
    }

    return (0);
}