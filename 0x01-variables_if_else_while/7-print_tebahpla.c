#include <stdio.h>

/*
 * main - Entry point
 * This program prints the lowercase alphabet in reverse,
 * using the putchar function to print each letter as a character,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
