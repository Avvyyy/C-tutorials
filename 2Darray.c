#include <stdio.h>

int main() {
	//2D array = an array where each element is an entire array
	// 				useful if you need a matrix, grid, or table of data

	int numbers[3][4] = {
												{1, 2, 3, 3},
												{4, 5, 6, 5},
												{1, 0, 9, 8},
											}; 
	//numbers[2][3] tells us that this is a 2D array of 2 arrays of an array of 3 numbers


	int rows = sizeof(numbers)/sizeof(numbers[0]);
	int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
	for( int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			printf("%d ", numbers[i][j]);
		}
		printf("\n");
	}
	return 0;
}