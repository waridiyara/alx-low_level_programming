#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @x: the number to be printed
 * Return: last digit
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 10)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
