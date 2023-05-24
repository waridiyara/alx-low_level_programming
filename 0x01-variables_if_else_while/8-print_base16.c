#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers to base 10 starting with 0
 * Return: 0(success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
