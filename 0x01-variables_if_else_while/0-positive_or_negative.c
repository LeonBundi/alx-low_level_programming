#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Print if a number is positive, negative or zero
 *
 *Description: Assign a random number to the variable n each time it's executed
 *
 *Return: 0 value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
