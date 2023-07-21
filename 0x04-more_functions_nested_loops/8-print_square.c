#include "main.h"

/**
 * print_squre - prints a squre of size size
 * @size: size of the squre
 *
 * Return: void
 */
void print_squre(int size)
{
	int i, j;
	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
