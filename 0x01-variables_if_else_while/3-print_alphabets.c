#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase then uppercase
 * Return: 0
 */
int main(void)
{
	char x = 'a';
	while(x <= 'z')
	{
		putchar(x);
		x++;
	}
	char x = 'A';
	while(x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

