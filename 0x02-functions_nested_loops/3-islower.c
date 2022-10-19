#include "main.h"

/**
 * _islower- checking for lower case characters
 * @c: the character
 * Return: Returns 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

