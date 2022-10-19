#include "main.h"

/**
 *print_sign - main function
 * @n : the number of the sign to be printed
 * Return: 0 or 1, negative or positive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
