#include "main.h"

/**
 * _isupper - Decides if a character is uppercase
 * @c: Value to return
 * Return: Always 0 if c is uppercase
 */

int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		return (1);
	}

	else
		return (0);
}
