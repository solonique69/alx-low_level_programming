#include <stdio.h>

void rev_string(char *s)
{
	if (!s || !*s)
		return;

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
