#include "main.h"

/**
 * times_table - Prints the n > 0 times table.
 * @n: Value for multiplication
 */

void times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;

			if (column == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + result / 10);
				}

				_putchar('0' + result % 10);
			}

			if (column == 9)
			{
				_putchar('\n');
			}
		}
	}
}
