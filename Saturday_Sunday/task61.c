#include <stdio.h>
#include <stdlib.h>

int maxNumMatrix(int** nums, int row, int column) {
	int max = nums[0][0];
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			if (max < nums[i][j]) {
				max = nums[i][j];
			}
		}
	}
	return max;
}

int main() {
	int row;
	int column;
	scanf("%d", &row);
	scanf("%d", &column);
	int **nums = (int**) malloc (sizeof(int*) * row);
	for (int i = 0; i < row; ++i) {
		nums[i] = (int*) malloc (sizeof(int) * column);
	}

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			scanf("%d", &nums[i][j]);
		}
	}
	
	printf("max num = %d", maxNumMatrix(nums, row, column)); 		
}
