#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number of the sign to be printed
 * Return: 1 if the number is greater than zero
 * 0 of number is zero
 * -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
