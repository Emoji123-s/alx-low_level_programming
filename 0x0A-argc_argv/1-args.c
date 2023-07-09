#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /*This is to ignore the use of argv */
	printf("%d\n", argc - 1);
	/*argc - 1 is to minus 1 from the argc value */

	return (0);
}
