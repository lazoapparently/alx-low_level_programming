#include <stdio.h>

/**
 * main - prints names of alhabets
 *
 * Return: 0
 */

int main(void)
{
	/*Declarations*/
	char letter;

	for (letter='a'; letter<='z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
