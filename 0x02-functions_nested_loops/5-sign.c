#include "main.h"

/**
 * print_sign -> prints sign based on condition
 * @n: argument passed
 * REturn: 1, 0 -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n ==0)
	{
		_putchar('0');
		return (0);
	}
}
