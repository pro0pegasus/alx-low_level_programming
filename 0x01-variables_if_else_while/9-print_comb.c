#include <unistd.h>
#include <stdio.h>

/**
 * main -   prints all possible combinations of single-digit numbers
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

	if (a != '9')
		write(1, ", ", 2);
		a++;
	}

	putchar('\n');

	return (0);
}
