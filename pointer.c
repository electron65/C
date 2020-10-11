#include <stdio.h>

int main() {

	int * ptr;
	int x = 90;

	ptr = &x;

	printf("*ptr = %d, x = %d, ptr = %d, &x = %d \n", *ptr, x, ptr, &x);

	return 0;
}
