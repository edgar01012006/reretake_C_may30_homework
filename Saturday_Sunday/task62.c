#include <stdio.h>
#include <stdlib.h>

int minNumMatrix(int** nums, int row, int column) {
        int min = nums[0][0];
        for (int i = 0; i < row; ++i) {
                for (int j = 0; j < column; ++j) {
                        if (min > nums[i][j]) {
                                min = nums[i][j];
                        }
                }
        }
        return min;
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

        printf("min num = %d", minNumMatrix(nums, row, column));
}
