#include <stdio.h>

/**
 * main - prints the letters of the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char letter, digit;

	for (digit = 48; digit < 58; digit++)
	{
	putchar(digit);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
