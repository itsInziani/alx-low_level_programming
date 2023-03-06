#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program assigns a random number each time it is executed.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastd = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	printf("Last digit of %d is ", n);
	if (lastd > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastd == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
