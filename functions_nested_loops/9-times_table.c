#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: VOID
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			z = x * y;

			if (z < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');

			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
						_putchar((z % 10) + '0');
				}
				}
						_putchar('\n');
				}
				}
