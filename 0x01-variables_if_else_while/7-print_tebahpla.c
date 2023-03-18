#include <stdio.h>
#include <unistd.h>

/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	int hh;

	hh = 'z';

	while (hh >= 'a')
	{
		write(1, &hh, 1);
			hh--;
	}
		putchar('\n');

		return (0);
}
