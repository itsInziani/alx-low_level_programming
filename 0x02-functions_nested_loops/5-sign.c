#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is positive, -1 if n is negative, and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
}
