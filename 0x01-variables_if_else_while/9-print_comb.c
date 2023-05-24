#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints single digit numbers of base 10 starting from 0.
 * Return: 0(success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
