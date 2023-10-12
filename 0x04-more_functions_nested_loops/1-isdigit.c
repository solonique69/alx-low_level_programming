#include "main.h"

/**
 *  _isdigit- Decides if a character is a numberu
 * @c: Value to return
 * Return: Always 0 if c is uppercase
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
