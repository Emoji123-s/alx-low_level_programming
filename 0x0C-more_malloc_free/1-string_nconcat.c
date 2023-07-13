#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stnc;
	unsigned int ls1, ls2, lstnc, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lstnc = ls1 + n;

	stnc = malloc(lstnc + 1);

	if (stnc == NULL)
		return (NULL);

	for (i = 0; i < lstnc; i++)
		if (i < ls1)
			stnc[i] = s1[i];
		else
			stnc[i] = s2[i - ls1];

	stnc[i] = '\0';

	return (sout);
}
