#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10
 * Return: 0(success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}

	putchar('\n');
	return (0);
}
