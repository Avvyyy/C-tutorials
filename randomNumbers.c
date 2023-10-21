#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// pseudo random numbers = A set of values or elements that are statistically random
	// 													(Should not be used for cryptographic security)

	srand(time(0));

	int number1 = (rand() % 6) + 1;

	printf("%d\n", number1);

	return 0;
}