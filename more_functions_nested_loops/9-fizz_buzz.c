#include "main.h"
/**
 * main - print 1 to 100, if divisible by 3 fizz, if 5 buzz, if 15 fizzbuzz
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i == 100)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz ");
		else if ((i % 3) != 0 && (i % 5) == 0)
			printf("Buzz ");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
