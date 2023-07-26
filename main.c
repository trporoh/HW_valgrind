#include <stdio.h>
#include <stdlib.h>

int main(int args, char** argv) {

	int* a = (int*)malloc(12);
	int* b = (int*)malloc(0);
	a[4] = 5;

	a = b;
	printf("%d", a[4]);

	return 0;
}