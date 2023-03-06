#include <stdio.h>

/*
 * main - Entry point for the program prints the lowercase alphabet in reverse,
 * This program uses a for loop to iterate from the last letter 'z',
 * to the first letter 'a' of the lowercase alphabet,
 * and the putchar function to print each letter as a character,
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
