#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{

	const int MIN = 1;
	const int MAX = 100;
	int guess;
	int guesses;
	int answer;

	// uses current time as a seed

	srand(time(0));

// generates random number between MIN(1) and MAX(100)
	answer = (rand() % MAX) + MIN;

	do{
		printf("Enter a guess: ");
		scanf("%d", &guess);
		if (guess > answer)
		{
			printf("Too high!\n");
		}
		else if (guess < answer)
		{
			printf("Too low!\n");
		}
		else{
			printf("Perfect!\n");
		}
		guesses++;
	}while(guess != answer);

	printf("*********************************\n");
	printf("answer: %d\n", answer);
	printf("guesses: %d\n", guesses);

	return 0;
}