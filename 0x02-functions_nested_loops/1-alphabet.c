#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - printing lowercases of the alphabet
 * Return: Always 0
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
