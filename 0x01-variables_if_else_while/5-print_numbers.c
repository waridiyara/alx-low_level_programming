#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all single digits numbers to base 10
 * Return: 0(success)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
