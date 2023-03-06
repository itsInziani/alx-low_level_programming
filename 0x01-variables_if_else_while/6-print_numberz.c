#include <stdio.h>

/*
 * main - Entry point
 *
 * This program prints all single digit numbers of base 10, starting from 0,
 * followed by a new line.
 * Description: Uses a for loop to iterate from 0 to 9 and print each number,
 * as a character using the putchar function.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	putchar('\n');
	return (0);
}
