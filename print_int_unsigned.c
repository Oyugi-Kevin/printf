#include "main.h"

/**
 * main: print_b - takes an unsigned int and prints it in binary notation
 * description:
 * @b: unsigned in to print
 *
 * Return: number of digits printed
 */
int print_b(va_list b)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(b, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * main: print_u - prints an unsigned in in decimal notation
 * description:
 * @u: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(u, unsigned int);
	m = 1000000000; /* (10 ^ 9) */
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}