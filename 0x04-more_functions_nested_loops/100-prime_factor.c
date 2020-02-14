#include <stdio.h>
/**
 *main - finds and prints the largest prime factor of the number
 *612852475143, followed by a new line.
 *
 *Return: 0
 */
int main(void)
{
	unsigned long largestfactor = 0;
	unsigned long lowestfactor = 2;
	unsigned long num = 612852475143;

	while (num != 1)
	{
		lowestfactor = 2;
		while ((num % lowestfactor) != 0)
			lowestfactor++;

		num = num / lowestfactor;

		if (lowestfactor > largestfactor)
			largestfactor = lowestfactor;
	}

	printf("%lu\n", largestfactor);
	return (0);
}
