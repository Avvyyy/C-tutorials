#include <stdio.h>

int main() {
	char grade;

	printf("\nEnter a letter grade: ");
	scanf("%c", &grade);

	switch(grade){
		case 'A':
			printf("Perfect!\n");
			break;
		case 'B':
			printf("You did good!\n");
			break;
		case 'C':
			printf("Not so bad\n");
			break;
		case 'D':
			printf("At least it's not an F\n");
			break;
		case 'F':
			printf("Yayy, an F. FAILED!!\n");
			break;
		default:
			printf("Please enter only valid grades\n");
			main();
	}

	return 0;
}