# include "main.h"
/**
 * print_sign-check the sign of number
 *@n:Number
 * Return:1 if n i positive : 0 if n is 0:-1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		{
		return (1);
		}
	}
	else if (n < 0)
	{
		_putchar ('-');
		{
		return (-1);
		}
	}
	else
	{
		_putchar('0');
		{
		return (0);
		}
	}
}

