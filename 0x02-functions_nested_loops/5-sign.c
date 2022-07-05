#include "main.h"
/**
*print_sign - prints the sign of the num
*@n: intger to be tested
*
*Description: checks signs of the numbers
*Return: Always(0)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
