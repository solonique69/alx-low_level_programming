#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of bytes to copy from src
 * Return: A pointer to the destination buffer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
