#include <stdio.h>

/*
 * main - Entry point
 *
 * This program prints all possible combinations of single digit numbers,
 * in ascending order,
 * separated by ,,
 * followed by a space.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
