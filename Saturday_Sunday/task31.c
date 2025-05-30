#include <stdio.h>

void input(int* arr, const int size) {
	for (int i = 0; i < size; ++i) {
		scanf("%d", &arr[i]);
	}
}

void outputSum(int* arr, const int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	printf("sum = %d", sum);
}

int main() {
	const int size = 5;
	int arr[size] = { 0 };
	input(arr, size);
	outputSum(arr, size);
}
