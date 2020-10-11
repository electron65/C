#include <stdio.h>

int main() {

	char row0[] = "hello, world!";
	char row1[] = "goodbye, world!";
	char row2[] = "at last... world!";
	
	char * arr[] = {row0, row1, row2}; // points to every initial array
	
	int i = 0, j = 0;

	printf("%d / %d = %d\n", sizeof(arr), sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]));

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		for (j = 0; arr[i][j] != '\0'; j++) {
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
