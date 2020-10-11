#include <stdio.h>

int main() {

	char * ptr;
	char x[] = "hello, world!";

	ptr = x;

	printf("*ptr = %c, x = %d, ptr = %d, &x = %d \n", *ptr, x, ptr, &x);
	printf("*(ptr + 1) = %c\n", *(ptr + 1));
	printf("*(ptr + 2) = %c\n", *(ptr + 2));
	printf("*(ptr + 3) = %c\n", *(ptr + 3));
	printf("*(ptr + 4) = %c\n", *(ptr + 4));
	printf("*(ptr + 5) = %c\n", *(ptr + 5));
	printf("*(ptr + 6) = %c\n", *(ptr + 6));
	printf("*(ptr + 7) = %c\n", *(ptr + 7));
	printf("*(ptr + 8) = %c\n", *(ptr + 8));
	printf("*(ptr + 9) = %c\n", *(ptr + 9));
	printf("*(ptr + 10) = %c\n", *(ptr + 10));
	printf("*(ptr + 11) = %c\n", *(ptr + 11));
	printf("*(ptr + 12) = %c\n", *(ptr + 12));

	return 0;
}
