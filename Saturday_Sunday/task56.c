#include <stdio.h>

int sumMainDiagonal(const int size, int (*nums)[size]) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += nums[i][i];
	}
	return sum;
}

int main () {
	const int size = 3;
	int arr[size][size];
	for (int i = 0; i < size; ++i ) {
		for (int j = 0; j < size; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("%d", sumMainDiagonal(size, arr));
}
