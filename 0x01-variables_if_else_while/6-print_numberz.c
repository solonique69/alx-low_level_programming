#include <stdio.h>
#include <unistd.h>

/**
	*main - print 0123456789 utilising putchar
	*Return: Always 0 (Success)
*/

int main(void)
{
	int z;

	for (z = 0, z < 10, z++)
	{
		putchar(z + '0');
	
	}
	putchar('\n');

	return (0);

}
