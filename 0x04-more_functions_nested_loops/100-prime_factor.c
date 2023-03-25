#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_prime = 2;

	while (num % 2 == 0)
	{
		num /= 2;
	}

	for (long int i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_prime = i;
			num /= i;
		}
	}
	if (num > 2)
	{
		largest_prime = num;
	}

	printf("%ld\n", largest_prime);

	return (0);
}
