#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	/**
	 * num as the inserted number
	 * j as the character for the loop
	 * result to hold the final value
	 */
	int coins[] = {25, 10, 5, 2, 1};
	/* coins as an array, with the specific format integers */

	/* First conditon to check for number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Converting argv as a string format to an integer */
	num = atoi(argv[1]);
	result = 0;

	/* Second conditon to check for negative numbers */
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate over the coin array until false */
	for (j = 0; j < 5 && num >= 0; j++)
	{
		/* Execute as long as the conditon remains true */
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
