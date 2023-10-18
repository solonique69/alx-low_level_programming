#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of bytes to copy from src
 * Return: A pointer to the destination buffer dest
 */

char *_strncpy(char *dest, const char *src, int n)
{
	int i

	/*i = 0;*/

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
