#include <stdio.h>

/**
 * main - FizzBuzz
 * Return: 0 (success)
 */
int main(void)
{
	int FizzBuzz;

	for (FizzBuzz = 1; FizzBuzz <= 100; FizzBuzz++)
	{
		if (FizzBuzz == 100)
		{
			printf("Buzz");
		}
		else if (FizzBuzz % 3 == 0 && FizzBuzz % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (FizzBuzz % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (FizzBuzz % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", FizzBuzz);
		}
	}
	printf("\n");
	return (0);
}
