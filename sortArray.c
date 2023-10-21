#include <stdio.h>

// This is a basic bubble sort

void sortArray(int array[], int size) {

	for (int i = 0; i < size - 1; i++){
		for (int j = 0; j < size - 1; j++){
			if (array[j] > array[j + 1]){
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}	
		}
	}
}

void printArray(int array[], int size){
	for (int i =0; i <size; i++){
		printf("%d ", array[i]);
	}


}
int main(){
	int array[] = {9, 0, 8, 5, 4, 9, 19};
	int size = sizeof(array)/sizeof(array[0]);

	sortArray(array, size);
	printArray(array, size);
	
	return 0;
}