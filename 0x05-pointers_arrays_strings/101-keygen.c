#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/**
 * randomPasswordGeneration - generates random valid passwords
 * @N: password
 */
void randomPasswordGeneration(int N)
{
	int i = 0;
	int randomizer = 0;
	srand((unsigned int)(time(NULL)));

	char num[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[N];

	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = num[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			 printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
int main(void)
{
	 int N = 10;

	 randomPasswordGeneration(N);
	 return (0);
}
