#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: count arguments
 * @argv: array of arguments
 * Return: 0
 */



int main(int argc, char *argv[])

{

	(void)argv;



	printf("%d\n", argc - 1);

	return (0);

}
