#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int length;
	int start;
	int end;
	char temp;

	if (!s || !*s)
		return;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
