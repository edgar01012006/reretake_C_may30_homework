#include <stdio.h>
#include <stdlib.h>

int sumMainDiagonal(int** nums, const int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < i; ++j) {
			sum += nums[i][j];
		}
	}
	return sum;
}
int main() {
	const int size = 3;
	int** nums = (int**) malloc (sizeof(int*) * size);
	for (int i = 0; i < size; ++i) {
		nums[i] = (int*) malloc (sizeof(int) * size);
	}
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			scanf("%d", &nums[i][j]);
		}
	}
	printf("%d", sumMainDiagonal(nums, size));
	for (int i = 0; i < size; ++i) {
		free (nums[i]);
	}
	free(nums);
}
