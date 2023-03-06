#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	/* print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	/* print newline */
	putchar('\n');

	return (0);
}
