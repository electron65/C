#include <stdio.h>

int main() {

	char * ptr;
	char x[] = "hello, world!";
	int i = 0;
	ptr = x;

	printf("*ptr = %c, x = %d, ptr = %d, &x = %d \n", *ptr, x, ptr, &x);
	
	for(i = 0; i < 13; i++)
	printf("*(ptr + %d) = %c\n", i + 1, *(ptr + i));


	return 0;
}
