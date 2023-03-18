#include <unistd.h>
#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char number;
	char alphabet;

	number = '0';
	alphabet = 'a';

	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
	while (alphabet <= 'f')
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
