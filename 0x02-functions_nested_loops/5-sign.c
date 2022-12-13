#include "main.h"
/**
 * print_sign -  mean
 * @n : nmnsdmn
 * Return: 0 if 0, 1 if greater than 0, -1 lessthan 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
