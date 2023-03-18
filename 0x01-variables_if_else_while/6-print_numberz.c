#include <stdio.h>
#include <unistd.h>

/**
 * main -   Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		write(1, &a, 1);
		a++;
	}
	putchar('\n');

	return (0);
}
