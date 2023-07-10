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
	/**
	 * num as the inputed number
	 * j for incrementing in the loops
	 * result to hold the end value
	 * coins as an array due to specified numbers already
	 */
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	/* Condition to check for number of arguments passed */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Converting argv into an integer */
	num = atoi(argv[1]);
	result = 0;

	/* 2nd conditon to check for negative values */
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate over the coin array until it becomes false */
	for (j = 0; j < 5 && num >= 0; j++)
	{
		/* Executes as long as the condition is true */
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
