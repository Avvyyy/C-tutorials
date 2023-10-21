#include <stdio.h>
#include <string.h>

int main() {

// Note: Some of these functions are not in the standard C library so they might not compile with the normal gcc compiler

	char string1[] = "Bro";
	char string2[] = "Code";

	strlwr(string1);							
	// strupr(string1);
	// strcat(string1, string2);			//appends string2 to string1
	// strncat(string1, string2, 1);		//appends characters of string2 to string1
	// strcpy(string1, string2);			//copy string2 to string1
	// strncpy(string1, string2, 4);		//copy n characters of string2 to string1
	// strlen(string1)     //Gets the length of a string

	printf("%s", string1);

	return 0;
}
