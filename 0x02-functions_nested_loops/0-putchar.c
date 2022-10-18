#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: ALways 0
 */
int main(void)
{

	char word[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		putchar(word[a]);
	}

	putchar('\n');

	return (0);
}
