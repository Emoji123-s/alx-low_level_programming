#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * calcMincoins -  Calculates the minimum numbe of coins
 * required to make change for an amount of cents.
 *
 * @cents: amount of cents to make change.
 *
 * Return: Minimum number of coins
 */
int calcMincoins(int cents)
{
	int minCoins = 0;

	/* Negative check statement */
	if (cents < 0)
	{
		return (0);
	}

	/* Declaring variables for counting coins */

	/* Calculating the minimum number of coins */
	/* Lets use a switch statement */
	while (cents > 0)
	{
		switch (cents)
		{
			/* First Case */
			case 25:
				minCoins++;
				cents -= 25;
				break;
			/* Second Case */
			case 10:
				minCoins++;
				cents -= 10;
				break;
			/* Third Case */
			case 5:
				minCoins++;
				cents -= 5;
				break;
			/* Fourth Case */
			case 2:
				minCoins++;
				cents -= 2;
				break;
			/* Fifth Case */
			case 1:
				minCoins++;
				cents -= 1;
				break;
			default:
				break;
		}
	}
	return (minCoins);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: (0) on success, (1) on error
 */
int main(int argc, char *argv[])
{
	int minCoins;
	int cents;

	/* Lets check for the number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* We need to convert the string to an integer */
	cents = atoi(argv[1]);

	/* Lets print out the minimum number of coins */
	minCoins = calcMincoins(cents);
	printf("%d\n", minCoins);

	return (0);
}
