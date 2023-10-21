#include <stdio.h>

int findMax(int x, int y) {
	// Using if-else statements
	// if(x > y)
	// {
	// 	return x;
	// }
	// else{
	// 	return y;
	// }

	// Using tenary operators
	return (x > y) ? x : y;
}

int main() {

// Tenary operators - Shortcuts to if-else statements.
// (condition) ? value if true : value if false

int max = findMax(3, 4)
printf("%d", max);

	return 0;
}