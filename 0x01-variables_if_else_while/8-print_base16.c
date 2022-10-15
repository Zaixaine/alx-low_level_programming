#include <stdio.h>

/**
 * main - entry
 * Return: returns 0
 */
int main(void)
{
	int num;
	char hexvalues[] = "0123456789abcdef";

	for (num = 0; num < 16; num++)
	{
		putchar(hexvalues[num]);
	}
	putchar('\n');
	return (0);
}
