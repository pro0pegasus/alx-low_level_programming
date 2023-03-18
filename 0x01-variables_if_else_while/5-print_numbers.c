#include <stdio.h>

/**
 * main -   prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */

int main(void)
{
	char a;

	a = 0;
	while (a <= 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");

	return (0);
}
