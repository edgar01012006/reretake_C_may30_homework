#include <stdio.h>
#include <stdlib.h>

void output(int* nums, const int size) {
	for (int i = 0; i < size; ++i) {
		printf("element - %d : %d\n", i, *(nums + i));
	}
}

int main() {
	const int size = 5;
	int* nums = (int*) malloc (sizeof(int) * size);
	for (int i = 0; i < size; ++i) {
		scanf("%d", &(*(nums + i)));
	}
	output(nums, size);
	free(nums);
}
	
