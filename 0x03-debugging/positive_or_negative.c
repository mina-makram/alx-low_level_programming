#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - random number to int n everytime
 * @i : integeer
 * it executes, and prints it
 * Return: Always 0 (Success)
 */

void  positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
